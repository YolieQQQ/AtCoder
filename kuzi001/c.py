from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations, chain
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)


if __name__ == '__main__':
    N = int(input())
    S = []
    ans = []
    for n in range(N):
        s = input()
        S.append(s)
    L = [] 
    for i in range(N):
        L.append([])
    for l in range(N):
        M = len(S[l])
        ll = []
        for bit in range(1<<M):
            s = ''
            for i in range(M):
                if bit>>i&1:
                    s += S[l][i]
            ll.append(s)
        L[l].append(ll)
    L[0].reverse()
    anss = []
    maxl = -1
    for l in chain.from_iterable(L[0]):
        cnt = 0
        for i in range(N):
            if l in chain.from_iterable(L[i]):
                cnt += 1
        if cnt==N:
            anss.append(l)
            maxl = max(maxl, len(l))
    anss.sort()
    for a in anss:
        if len(a)==maxl:
            print(a)
            quit()


        