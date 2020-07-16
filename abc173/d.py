from collections import deque

N = int(input())
A = list(map(int, input().split()))

A.sort()
A.reverse()
Ad = deque()
Ad.append(A[0])
Ad.append(A[1])
sum = A[0]
for i in range(2, N):
    a = Ad.popleft()
    sum += min(a, Ad[-1])
    Ad.append(A[i])

print(sum)
