from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)

import math
def comb(n, r):
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))

if __name__ == '__main__':
    N, K = map(int, input().split())
    nums = list(range(1, K+1))
    mcnt = 0
    # for bit in range(1<<K):
    #     num = 0
    #     cnt = 0
    #     for i in range(K):
    #         if bit>>i&1:
    #             num += i
    #             cnt += 1
    #     if num in nums and cnt>1:
    #         mcnt += 1
    
    if N<=K:
        print(1)
        quit()
    double = (N-1)//2

    all_choose = comb(N+1, K)
    print(all_choose-double)