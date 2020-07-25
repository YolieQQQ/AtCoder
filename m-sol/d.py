from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations, permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)



if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))

    money = 1000
    A.sort()
    # minA = min(A)
    # buy = 1000-(1000//minA)
    # bought_item = []
    # bought += 1000//minA
    # bought.append(minA)
    # mod = N-buy
    # for a in A:
    #     if a in bought::
    #         continue
    #     else:
    #         if mod-(mod/a)>0:

    #             mod = mod-(mod/a)>0:
    #             bought.append(a)
    #         else:
    #             break

    buy = 1000//A[0]
    mod = 1000 - A[0] * buy
    bought_item = []
    bought_item.append(A[0])
    i = 0
    while mod>0:
        print(mod)
        if A[i] in bought_item:
            continue
        else:
            buy += mod//A[i]
            mod -= A[i]*mod//A[i]
            bought_item.append(A[i])
    print(buy)
    print(max(A)*buy)

    
            


    
    
    maxA = max(A)
    
    