from operator import mul
from functools import reduce

def comb(n, r):
    r = min(r, n - r)
    numer = reduce(mul, range(n, n - r, -1), 1)
    denom = reduce(mul, range(1, r + 1), 1)
    return numer // denom

N = int(input())
A = list(map(int, input().split()))
sorted_A = sorted(A)
countNums = [0]*(N+1)

target = sorted_A[0]
for i in range(N):
    if target==sorted_A[i]:
        countNums[target] += 1
    else:
        target = sorted_A[i]
        countNums[target] += 1;


for i in range(N):
    a = A[i]
    countNums[a] -= 1
    ans = 0
    for c in countNums:
        ans += comb(c, 2)
    print(ans)
    countNums[a] += 1



