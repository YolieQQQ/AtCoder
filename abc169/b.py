N = int(input())
A = list(map(int, input().split()))
A.sort()
ans = 1
for a in A:
    ans *= a
    if ans > 1000000000000000000:
            print(-1)
            quit()
print(ans)