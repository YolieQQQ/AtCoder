from copy import deepcopy

if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))

    A_d = []

    for a in A:
        a -= 1
        A_d.append(a)

    for bit in range(1<<N):
        A_copy = deepcopy(A_d)
        for i in range(N):
            if bit>>i&1:
                del A_copy[i]
        print(A_copy)
        if len(A_copy) == len(A_d):
            continue
        for j, a in enumerate(A_copy):
            if j==a:
                print(j, a)
                print(len(A_d)-len(A_copy))
                quit()
    print(-1)
        





