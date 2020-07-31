from fractions import gcd
from math import log10
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations, permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    a, b, c, d = map(int, input().split())

    if b/a > d/c:
        print("TAKAHASHI")
    elif b/a < d/c:
        print("AOKI")
    elif b/a == d/c:
        print("DRAW")
