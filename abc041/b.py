if __name__ == '__main__':
    A, B, C = map(int, input().split())
    X = A*B*C
    print(X%(pow(10, 9)+7))