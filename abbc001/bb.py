from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    m, n, N = map(int, input().split())
    item = N
    while True:
        item += (N//m)*n
        if N-(N//m)*n < 0:
            break
        N = N-(N//m)*n
    
    print(item)
