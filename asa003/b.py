from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    max_v = -1
    for i in range(max(A)):
        cnt = 0
        for a in A:
            for d in [-1, 0, 1]:
                if a+d==i:
                    cnt += 1
            max_v = max(cnt, max_v)
    
    print(max_v)

