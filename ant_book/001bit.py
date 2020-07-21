if __name__ == '__main__':
    S = list(map(int, list(input())))
    print(S)

    N = len(S)

    for bit in range(1>>N):
        for i in range(N):
            if 