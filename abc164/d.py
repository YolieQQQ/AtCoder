def search(S):
    cnt = 0
    N = len(S)
    for i in range(N+1):
        for j in range(i+1, N+1):
            num = S[i:j]
            if int(num)%2019==0:
                cnt += 1
    return cnt 

if __name__ == "__main__":
    S = input()
    cnt = search(S)
    print(cnt)