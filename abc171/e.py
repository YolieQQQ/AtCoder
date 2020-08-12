from math import log2
K = None

def find_kai(a, kai):
    for k1 in kai[::-1]:
        for k2 in kai[::-1]:
            n = []
            for i in range(len(k1)):
                n.append(k1[i]^k2[i])
            if a==n[::-1]:
                ans1 = 0
                ans2 = 0
                for k in range(len(n)):
                    ans1 += k1[k]*pow(2, k)
                    ans2 += k2[k]*pow(2, k)
                print(0, ans1, ans2)
                return

if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    A_bin = []
    for a in A:
        a_bin = list(map(int, list(format(a, 'b'))))
        A_bin.append(a_bin)
    for a in A_bin:
        K = len(a)
        max_N = pow(2, K)
        kai = []
        for i in range(max_N):
            n = list(map(int, list(format(i, 'b'))))
            for j in range(K-len(n)):
                n.insert(0, 0)
            kai.append(n)
        find_kai(a, kai)
                

