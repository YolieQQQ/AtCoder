K, N = map(int, input().split())
A = list(map(int, input().split()))

max_dist = 0

for i in range(N-1):
    max_dist = max(A[i+1]-A[i], max_dist)

max_dist = max(max_dist, K-A[-1]+A[0])

print(K-max_dist)