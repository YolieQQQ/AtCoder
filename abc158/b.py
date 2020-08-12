if __name__ == '__main__':
    N, A, B = map(int, input().split())
    base = pow(10, 100)
    C = A+B
    mod = N%C
    n = N//C
    if mod>A:
        print(A*n+A)
    else:
        print(A*n+mod)
    
    
    

