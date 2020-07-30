from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)

if __name__ == '__main__':
    n, m, q = map(int, input().split())
    abcd = []
    for _ in range(q):
        row = list(map(int, input().split()))
        abcd.append(row)

    abcd_new = [1]
    for items  in abcd:
        a = items[0]
        b = items[1]
        c = items[2]
        d = items[3]
        a -= 1
        b -= 1
        abcd_new.append([a, b, c, d])

    initial_list = [1]*n

    i = 0
    while True:
        
    