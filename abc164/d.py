T = []
N = 0
visited = []
memo = []
def dfs(start, end):
    global T




if __name__ == "__main__":
    S = list(map(int, list(input())))
    T = S[::-1]
    N = len(T)
    visited = [False]*N
    memo = [[]*N]*N
    dfs(0, 0)