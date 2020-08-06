from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    S = list(input())
    A, B, C, D = map(int, input().split())

    S.insert(D, '"')
    S.insert(C, '"')
    S.insert(B, '"')
    S.insert(A, '"')

    ans = ''

    for s in S:
        ans += s

    print(ans)