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
    s = list(input())
    t = list(input())
    st = s+t
    cnt = 0
    for i in range(len(s)):
        if s[i] != st[-i-1]:
            print(st[i], st[-i-1])
        else:
            cnt += 1
            break
    
    

    print(len(st)-cnt)
