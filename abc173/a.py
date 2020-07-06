from typing import List
N = int(input())
if(N%1000==0):
    X = N//1000
    print(1000*(X)-N)
else:
    X = N//1000
    print(1000*(X+1)-N)