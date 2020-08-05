from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N  = int(input())
    A = list(map(int, input().split()))
    cnt = 0
    for i in range(N):
        for j in range(i, N):
            if abs(i-j)==A[i]+A[j]:
                cnt += 1
    print(cnt)