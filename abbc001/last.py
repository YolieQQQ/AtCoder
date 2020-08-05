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
    S = input()
    short_cuts = ['AB', 'AX', 'AY', 'XY', 'BX', 'BY']

    for s1 in short_cuts:
        for s2 in short_cuts:
            if s1==s2: continue
            for s3 in short_cuts:
                for i in range(N-1):
                    if S[i:i+1] ==

    cmds = []
    for i in range(N-1):
        cmd = S[i]+S[i+1]
        cmds.append(cmd)

    cmds_counter = Counter(cmds)
    most_cmd = cmds.most_common()[0][]
    most_cmd_cnt = cmds.most_common()[0][1]


    ans = N-(most_cmd-1)

