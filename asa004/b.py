from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    E = list(map(int, input().split()))
    B = int(input())
    L = list(map(int, input().split()))

    N = len(E)
    cnt = 0
    H = []
    for l in L:
        if l in E:
            cnt += 1
        else:
            H.append(l)
    if len(H)==1 and H[0] == B:
        print(2)
    elif cnt==6:
        print(1)
    elif cnt==5:
        print(3)
    elif cnt==4:
        print(4)
    elif cnt==3:
        print(5)
    else:
        print(0)
