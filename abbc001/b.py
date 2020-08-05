from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
import re
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    S = list(input())
    ans = ''
    cnt = 0
    for s in S:
        if s==' ' and cnt==0:
            cnt += 1
            ans += ','
        elif s==' ' and cnt !=0:
            continue
        else:
            ans += s
            cnt = 0
    print(ans)