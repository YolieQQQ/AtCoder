S = input()
N = len(S)
N1s = (N-1)//2
N2s = (N+3)//2-1

if S[:N1s] == S[N2s:]:
    print("Yes")
else:
    print("No")

