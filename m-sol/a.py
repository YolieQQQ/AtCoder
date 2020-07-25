from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations, permutations
from copy import deepcopy
import sys
import numpy as np
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    X = int(input())

    if 400<=X<=599:
        print(8)
    elif 600<=X<=799:
        print(7)
    elif 800<=X<=999:
        print(6)
    elif 1000<=X<=1199:
        print(5)
    elif 1200<=X<=1399:
        print(4)
    elif 1400<=X<=1599:
        print(3)
    elif 1600<=X<=1799:
        print(2)
    else:
        print(1)