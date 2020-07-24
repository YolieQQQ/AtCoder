
from copy import deepcopy


if __name__ == '__main__':
    N, M = map(int, input().split())
    H = [0] + list(map(int, input().split()))
    AB = [[]]*(N+1)
    for _ in range(M):
        ab = deepcopy(list(map(int, input().split())))
        AB[ab[0]].append(ab[1])
    cnt = 0
    print(AB)
    for i in range(1, N+1):
        can_go = AB[i]
        height = H[i]
        n = 0
        for c in can_go:
            if height > H[c]:
                n += 1
            else:
                break
        if n==len(can_go):
            cnt += 1

    print(cnt)
    






