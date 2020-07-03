from collections import deque

N, M, K = map(int, input().split())
A = deque(map(int, input().split()))
B = deque(map(int, input().split()))

read_time = 0
read_num = 0

while True:
    if len(A)==0 and len(B)==0:
        break
    if read_time>K:
        break
    if len(A)==0:
        r = B.popleft()
        if K>=read_time+r:
            read_num += 1
            read_time += r
            continue
        else:
            break
    elif len(B)==0:
        r = A.popleft()
        if K>=read_time+r:
            read_num += 1
            read_time += r
            continue
        else:
            break
    if(A[0]<B[0]):
        r = A.popleft()
        if K>=read_time+r:
            read_num += 1
            read_time += r
        else:
            break
    else:
        r = B.popleft()
        if K>=read_time+r:
            read_num += 1
            read_time += r
        else:
            break
print(read_num)
    






