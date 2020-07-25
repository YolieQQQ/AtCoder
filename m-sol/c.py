from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations, permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)
import math
def comb(n, r):
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))


if __name__ == '__main__':
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    mod = len(A)%K
    prev = None
    L = 0
    acc_list = []
    acc = 1
    for a in A:
        acc *= a
        acc_list.append(acc)

    for i in range(N-K+1):
        if i ==0:
            check = acc_list[K]
        else:
            check = acc_list[i+K]//acc_list[i]
        print(check)
        
        if i==0:
            prev = acc
        else:
            if prev<acc:
                print("Yes")
            else:
                print("No")
            prev = acc