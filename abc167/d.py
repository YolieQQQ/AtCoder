N, K= map(int, input().split())
A = [0] + list(map(lambda a: int(a), input().split()))

now = 1
loop = []
checker = set()
loop.append(now)
checker.add(now)
while True:
    nxt = A[now]
    loop.append(nxt)
    checker.add(nxt)
    now = nxt
    if len(loop) != len(checker):
        break

end = loop[-1]
first_end = loop.index(end)
loop_circle = len(loop)-first_end-1

loopy = loop[first_end:-1]
num = K-first_end
ans = loopy[(num%loop_circle)]
print(ans)
    




