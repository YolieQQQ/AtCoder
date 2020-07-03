
N = int(input())
X = list(map(int, input().split()))

minX = min(X)
maxX = max(X)
if minX==maxX:
    print(0)
    quit()

HP = []
for p in range(minX, maxX):
    hp = 0
    for x in X:
        hp += (x-p)**2
    HP.append(hp)

print(min(HP))
    