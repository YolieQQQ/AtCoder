from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)
A = []
n = None
p = None
cnt = 0
def dfs(i, e):
    global A, n, p, cnt
    print(i, e)
    if i==len(A) or e==sum(A):
        return
    if e%2==p:
        cnt += 1
    for a in range(1, A[i]+1):
        dfs(i, e+a)
        dfs(i+1, e)

if __name__ == '__main__':
    n, p = map(int, input().split())
    A = list(map(int, input().split()))
    dfs(0, 0)
    print(cnt)

