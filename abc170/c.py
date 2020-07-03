X, N = map(int, input().split())
P =  set(map(int, input().split()))
Nums = set(range(-100, 200))
Nums = Nums - P
sorted(Nums)


minNum = 99999
minIndex = 0
for n in Nums:
    if minNum == abs(X-n):
        break
    if abs(X - n)< minNum:
        minNum = abs(X-n)
        minIndex = n

print(minIndex)




    
