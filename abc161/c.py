
if __name__ == '__main__':
    N, M = map(int, input().split())
    A = list(map(int, input().split()))

    A = sorted(A)[::-1]
    s = sum(A)
    cnt = 0
    for i in range(M):
        if s<=4*M*A[i]:
            cnt += 1
    if cnt==M:
        print("Yes")
    else:
        print("No")
    
