from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    INIT = deepcopy(A)
    R = [0]*N
    D = 0
    for i in range(N):
        if A[i] < B[i]:
            R[i] += B[i]-A[i]
        else:
            D += A[i]-B[i]
            A[i] = B[i]

    cnt = 0
    for i in range(N):
        if R[i] > 0:
            if R[i]<=D:
                cnt += R[i]
                A[i] += R[i]
            else:
                print(-1)
                quit()
    print(A, INIT)
    for i in range(N):
        if A[i]== INIT[i]:
            A[i] += 1
            cnt += 1
    print(cnt)
    
    print(cnt+)
