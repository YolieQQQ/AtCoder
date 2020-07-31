from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    n = int(input())
    a =  list(map(int, input().split()))
    b = []
    for i, ai in enumerate(a):
        if i%2==0:
            b.insert(0, ai)
        else:
            b.insert(-1, ai)


    print(*b)