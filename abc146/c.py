from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy, copy
from math import sqrt, log10
import sys
sys.setrecursionlimit(4100000)

if __name__ == '__main__':
    A, B, X = map(int, input().split())

    high = pow(10, 9)+1
    low = 0
    N = (high+low)//2
    i = 0
    while high>=low:
        cost = A*N+B*len(str(N))
        if i==100: break
        if X < cost:
            high = N
        else:
            low = N
        N = (high+low)//2
        i += 1
    print(N)