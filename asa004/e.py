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
    AB = []
    for _ in range(N):
        ab = list(map(Decimal, input().split()))
        AB.append(ab)

    ans = set()

    for i in range(N):
        a = (AB[i][0]+AB[i][1])/2
        ans.add(a)
    print(ans)
    print(len(ans))
