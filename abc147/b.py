from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    S = input()
    mid = len(S)//2

    cnt = 0
    for i in range(mid):
        if S[i] != S[-i-1]:
            cnt += 1
    print(cnt)

    
