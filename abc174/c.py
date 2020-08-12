def sevens():
    num = 7
    while True:
        num = num*10+7
        yield num

if __name__ == '__main__':
    K = int(input())    
    for i, sv in enumerate(sevens()):
        if sv%K==0:
            print(sv)
            print(i+2)
            quit()
        if K<=i:
            print(-1)
            quit()
        

