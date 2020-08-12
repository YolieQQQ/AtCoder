if __name__ == '__main__':
    A = []
    for i in range(3):
        row = list(map(int, input().split()))
        A.append(row)
    
    N = int(input())
    B = []

    for i in range(N):
        B.append(int(input())) 
    
    for i in range(3):
        cnt = 0
        for j in range(3):
            if A[i][j] in B:
                cnt += 1
        if cnt==3:
            print('Yes')
            quit()
            
    for i in range(3):
        cnt = 0
        for j in range(3):
            if A[j][i] in B:
                cnt += 1
        if cnt==3:
            print('Yes')
            quit()

    if A[0][0] in B and A[1][1] in B and A[2][2] in B:
        print('Yes')
        quit()
    
    if A[0][2] in B and A[1][1] in B and A[2][0] in B:
        print('Yes')
        quit()
    
    print('No')