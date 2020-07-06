import numpy as np 
import copy
H, W, K = map(int,input().split())
C = []
for h in range(H):
    row = list(input())
    C.append(row)
C =  np.array(C)
ans = 0
for h1 in range(H):
    for h2 in range(H):
        cnt = 0
        for c in np.ravel(C[:h1+1, h2:]):
            if c == "#":
                cnt += 1
        if cnt == 2:
            ans += 1
for h1 in range(W):
    for h2 in range(W):
        cnt = 0
        for c in np.ravel(C[:][:h1+1, h2:]):
            if c == "#":
                cnt += 1
        if cnt == 2:
            ans += 1
for h1 in range(W):
    for h2 in range(H):
        cnt = 0
        for c in np.ravel(C[:h2:][:h1:]):
            if c == "#":
                cnt += 1
        if cnt == 2:
            ans += 1

print(ans)



