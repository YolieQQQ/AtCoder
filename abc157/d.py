
if __name__ == '__main__':
    N, M = map(int, input().split())
    num = '0'*N
    print(num)
    for _ in range(M):
        s, c = map(int, input().split())
        s -= 1
        c = str(c)
        num[s] = c

    print(num)
