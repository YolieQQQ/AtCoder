from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
from math import sqrt
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N = int(input())
    xy = []
    for _ in range(N):
        x, y = map(int, input().split())
        xy.append([x, y])
    
    visit_perm = list(range(N))
    sum_dist = 0
    cnt = 0
    for v in permutations(visit_perm):
        cnt += 1
        prev = -1
        for i, p in enumerate(v):
            if i==0:
                prev = [xy[p][0], xy[p][1]]
            else:
                sum_dist += sqrt((xy[p][0]-prev[0])**2+(xy[p][1]-prev[1])**2)
    print(sum_dist/cnt)




