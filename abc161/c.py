N, K = map(int, input().split())

n = N//K
m1 = N-K*n
m2 = abs(N-K*(n+1))
ans = min(m1, m2)
print(ans)