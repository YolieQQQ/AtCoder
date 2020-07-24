
if _name__ == '__main__':
    X = int(input())
    i = 1
    while True:
        sosu = True
        num = X+i
        for p in range(2, X+i+1):
            if num%p==0:
                continue
            else:
                sosu = False
                print(num)
                break




