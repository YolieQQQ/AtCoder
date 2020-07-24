if __name__ == '__main__':
    S = list(input())
    Q = int(input())

    for _ in range(Q):
        Query = list(map(str, input().split()))
        if len(Query)==1:
            S[0], S[-1] = S[-1], S[0]
        else:
            if Query[1]=='1':
                S.insert(0, Query[2])
            else:
                S.append(Query[2])
        

    
    ans= ''
    for s in S:
        ans += s
    print(ans)
                