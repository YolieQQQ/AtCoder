
if __name__ == '__main__':
    N, K = map(int, input().split())
    A = [0] + list(map(int, input().split())) 

    prev = 1
    memo = []
    loop_start_index = 0
    while True:
        nxt = A[prev]
        if nxt not in memo:
            memo.append(nxt)
        else:
            end = nxt
            break
        prev = nxt
        loop_start_index += 1 
    start = 0
    for i, m in enumerate(memo):
        if m==end:
            start = i 
    d = loop_start_index-start
    if K<=start:
        print(memo[K])
    else:
        K -= start
        print(memo[K%d])




