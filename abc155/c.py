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
    S_list = []

    s_hash = dict()

    for i in range(N):
        S_list.append(input())

    for s in S_list:
        if s not in s_hash:
            s_hash[s] = 1
        else:
            s_hash[s] += 1
    max_p = 0
    max_p_name = []
    for k, v in s_hash.items():
        if max_p < v:
            max_p_name = []
            max_p = v
        if max_p == v:
            max_p_name.append(k)
    
    for p in sorted(max_p_name):
        print(p)



    


