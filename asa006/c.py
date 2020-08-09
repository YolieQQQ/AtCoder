

if __name__ == '__main__':
    N, M = map(int, input().split())
    XY = []
    for _ in range(M):
        x, y = map(int, input().split())
        x -= 1
        y -= 1
        XY.appned((x, y))

    A = [[False]]*N
    A[0].append(True)

    for i in range(M):
        x, y = XY[i]
        