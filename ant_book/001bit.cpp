if __name__ == '__main__':
    S = list(map(int, list(input())[::-1]))
    print(S)

    N = len(S)


    ans = 0
    for bit in range(1<<N):
        ops = []
        for i in range(N):
            if bit>>i&1:
                ops.append(i)
        num = 0
        choose = []
        ops.append(N-1)
        for j in range(len(ops)-1):
            C = S[ops[j]:ops[j+1]]
            for k, c in enumerate(C):
                num += c*pow(10, k)
        ans += num 
    
    print(ans+125)

