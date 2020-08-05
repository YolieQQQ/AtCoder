from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    H, N = map(int, input().split())
    A = list(map(int, input().split()))
    A.sort()
    A.reverse()
    for a in A:
        H -= a

    if H>0:
        print("No")
    else:
        print("Yes")