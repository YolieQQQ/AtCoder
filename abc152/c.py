N = int(input())
P = list(map(int, input().split()))
ans =1 
newP = P[0]
for i in range(1, N):
    newP = (min(newP, P[i]))
    if newP == P[i]:
        ans += 1

print(ans)