

N = int(input())
S = []
Sset = set()
for i in range(N):
    s = input()
    Sset.add(s)
    S.append(s)

names = [0]*len(Sset)

for i, name in enumerate(Sset):
    cnt = 0
    for s in S:
        if(name==s):
            cnt += 1
            names[i] = (name, cnt)
max = 0
for n in names:
    if max<n[1]:
        max = n[1]
ans = []
for n in names:
    if n[1]==max:
        ans.append(n[0])

ans.sort()
for a in ans:
    print(a)


