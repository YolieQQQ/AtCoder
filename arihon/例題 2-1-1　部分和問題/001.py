from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy, copy
import sys
sys.setrecursionlimit(4100000)

ans = 0
N = 0

def dfs(start, end):
    global ans, N
    if start>end:
        return
    if end==N:
        return
    # print(start, end)
    num = 0
    for i in range(end-start+1):
        num += S[start+i]*pow(10, i)
    print(num)
    ans += num
    
    dfs(start, end+1)
    dfs(start+1, end)



if __name__ == '__main__':
    T = list(map(int, list(input())))
    S = []
    for t in T[::-1]:
        S.append(int(t))
    N = len(S)
    
    dfs(0, 0)
    print(ans)

