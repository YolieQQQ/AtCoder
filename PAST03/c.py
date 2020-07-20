A, R, N = map(int, input().split())

num = A*R**(N-1)

if num>10e9:
    print("large")
else:
    print(num)