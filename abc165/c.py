

abcd = []
n, m, q  = None, None, None
max_point = -1
def dfs(index, point, array):
    global abcd, n, m, q, max_point
    if index==n:
        max_point = max(max_point, point)
        return
    print(array)
    for i in range(q):
        try:
            if array[abcd[i][1]]-array[abcd[i][0]]==abcd[i][2]:
                print(array)
                point += abcd[i][3]
        except:
            continue
        
    for _ in range(m-1):
        if array[index] > 0:
            array[index] -= 1
            dfs(index, point, array)
            array[index+1] -= 1
            dfs(index, point, array)


if __name__ == '__main__':
    n, m, q = map(int, input().split()) # n is max length m is max number

    for _ in range(q):
        row = list(map(int, input().split()))
        abcd.append(row)
    array = []
    for _ in range(n):
        array.append(m)
    dfs(0, 0, array)
    print(max_point)
