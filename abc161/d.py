strnum: str = '0'
steps = [-1, 0, 1]

def lunlun(x: int):
    strinv = strnum[::-1]
    for s in strinv:
        for step in strinv:
            lunlun(int(s)+step)




K = int(input())
ans = lunlun(K)
print(ans)


