N = int(input())
A = list(map(int, input().split()))

A_set = set(A)

if(len(A_set)==len(A)):
    print("YES")
else:
    print("NO")