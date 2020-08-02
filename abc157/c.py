from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
from math import log10
import sys
sys.setrecursionlimit(4100000)
INF = 1001001001


if __name__ == '__main__':
    N, M = map(int, input().split())
    map_digit = [INF]*N
    for _ in range(M):
        s, c = map(int, input().split())
        s -= 1
        map_digit[s] = min(map_digit[s], c)
    num = []
    for m in map_digit:
        if m==INF:
            m = 0
        num.append(m)
    num.reverse()
    ans = 0
    for k in range(N):
        if num[N-1]== 0:
            print(-1)
            quit()
    
        ans += num[k]*pow(10, k)
    print(ans)