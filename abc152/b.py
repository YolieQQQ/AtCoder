a, b = map(str, input().split())

A = a*int(b)
B = b*int(a)
AB = [A, B]
AB.sort()
print(AB[0])
