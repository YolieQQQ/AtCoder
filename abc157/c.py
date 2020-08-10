
if __name__ == '__main__':
    N, M = map(int, input().split())
    S = []
    C = []

    for i in range(M):
        s, c = map(int, input().split())
        s -= 1
        S.append(s)
        C.append(c)

    for num in range(0, pow(10, N)):
        st_num = str(num)
        if len(str(st_num))!=N: continue
        cnt = 0
        for m in range(M):
            if int(st_num[S[m]])==C[m]:
                cnt += 1
        if cnt==M:
            print(st_num)
            quit()
    print(-1)

        