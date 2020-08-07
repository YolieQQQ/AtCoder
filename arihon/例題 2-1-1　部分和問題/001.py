S = []
N = None
ans = 0
from copy import deepcopy

if __name__ == '__main__':
    T = list(map(int, list(input())))
    N = len(T)
    
    for bit in range(1<<(N-1)):
        for i in range(N-1):
            if bit>>i&1:
                S.insert(2*i-1, '+')
        sum_num = 0
        num = 0 
        k = 0
        print(S)
        for s in S[::-1]:
            if s=='+':
                k = 0
            else:
                num += s*pow(10, k)
                k += 1
        ans += num
        S = deepcopy(T)

    print(ans)
