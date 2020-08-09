from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
from decimal import Decimal
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N = int(input())
    A = list(map(Decimal, input().split())) 
    sum = Decimal(0)
    cnt = Decimal(0) 
    for a in A:
        if a!=0:
            sum += a
            cnt += 1
    
    print(round(sum/cnt))
