import sys

sys.setrecursionlimit(200000)

H = None 
W = None 
ans = "No"
visited = {}

def dfs(S, x, y):
    global H, W, ans, visited
    if not(0<=x<W) or not(0<=y<H) or S[y][x]=='#':
        return 
    if (x, y) in visited: 
        return
    visited[(x, y)] = True

    if S[y][x] == 'g':
        ans = "Yes"
        print(ans)
        quit()
    
    dfs(S, x+1, y)
    dfs(S, x-1, y)
    dfs(S, x, y+1)
    dfs(S, x, y-1)

if __name__ == '__main__':
    S = []
    H, W = map(int, input().split())
    for _ in range(H):
        S.append(input())

    start_x = 0
    start_y = 0

    for h in range(H):
        for w in range(W):
            if S[h][w] == 's':
                start_x = w
                start_y = h
    dfs(S, start_x, start_y)
    print(ans)