from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N, M, L = map(int, input().split()) # go
    P, Q, R = map(int, input().split())# my 
    A = [N, M, L]
    B = [P, Q, R]
    A = sorted(A)[::-1]
    B = sorted(B)[::-1]

    S = A[0]*A[1]
    T = B[0]*B[1]
    ok = True
    for i in range(3):
        if A[i] < B[i]:
            ok = False
    if not(ok):
        print(0)
        quit()


    if S<T:
        print(0)
        quit()
    else:
        H1 = A[2]
        H2 = B[2]
        if H1<H2:
            print(0)
            quit()
        else:
            print(S//T*H1//H2)