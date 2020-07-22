from copy import deepcopy
def count(A):
    cnt = 0
    for a in A:
        cnt += (a*(a-1))//2
    return cnt
if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    max_A = max(A)
    count_A = [0]*(max_A+1)
    for a in A:
        count_A[a]+= 1
    combi_A = 0
    for c in count_A:
        combi_A += (c*(c-1))//2
    for a in A:
        print(combi_A-(count_A[a]*(count_A[a]-1)-(count_A[a]-1)*(count_A[a]-2))//2)