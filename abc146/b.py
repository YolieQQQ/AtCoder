from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
import numpy as np
sys.setrecursionlimit(4100000)


if __name__ == '__main__':
    N = int(input()) 
    S = input()
    Z = ord('Z')
    ans = ''
    for s in S:
        if ord(s)+N>ord('Z'):
            ans += chr(ord('A')+ord(s)+N-ord('Z')-1)
        else:
            ans += chr(ord(s)+N)
    print(ans)