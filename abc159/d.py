from scipy.special import comb

INF = 100100100

N = int(input())
A = list(map(int, input().split()))

A.insert(0, INF)
anss = []
choose = [0]*(N+1)
for n in range(N):
    Ad = A.copy()
    Ad[n] = INF
    
    for i in range(N+1):
        num = 0
        for j in range(i, N+1):
            if Ad[i]==INF or Ad[j] == INF:
                continue
            if Ad[i]==Ad[j]:
                num += 1
                choose[Ad[i]] = num
        ans = 0
    for c in choose:
        ans += int(comb(c, 2))
    choose = [0]*(N+1)
    print(ans)
    



