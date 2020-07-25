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
    O = list(map(int, input().split()))
    K = int(input())
    A = O[0]
    B = O[1]
    C = O[2]

    for i in range(4):
        for j in range(4):
            for k in range(4):
                print(i, j, k)
                if i+j+K==3:
                    A *= 2**i
                    B *= 2**j
                    C *= 2**k
                    if A < B < C:
                        print("Yes")
                        quit()
    
    print("No")