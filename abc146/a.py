from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
import numpy as np
sys.setrecursionlimit(4100000)

day = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']

if __name__ == '__main__':
    S = input()
    for i, d in enumerate(day):
        if S==d:
            print(7-i)
