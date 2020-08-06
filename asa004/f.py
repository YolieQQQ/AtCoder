from fractions import gcd
from collections import Counter, deque, defaultdict
from heapq import heappush, heappop, heappushpop, heapify, heapreplace, merge
from bisect import bisect_left, bisect_right, bisect, insort_left, insort_right, insort
from itertools import product, combinations,permutations
from copy import deepcopy
import sys
sys.setrecursionlimit(4100000)

ans = 0

def bit(N, M):
    ans = 0
    for bit in range(1<<(M+1)):
        nums = []
        for i in range(M+1):
            if bit>>i&1 and i!=0:
                nums.append(i)
        if len(nums)>N:
                return ans
        if len(nums)!=N:
            continue
        print(nums)
        num = 1
        for n in nums:
            num *= n
        if num==M:
            ans += 1
    return 0
            

                


if __name__ == '__main__':
    N, M = map(int, input().split())
    print(bit(N, M))