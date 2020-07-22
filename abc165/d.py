A = 0
B = 0
N = 0
def cal(x):
    global A, B, N
    return (A*x/N)-A*(x/B)



if __name__ == '__main__':
    A, B, N = map(int, input().split())
    mid = N/2
    base1 = cal(mid+1)
    base2 = cal(mid-1)
    
        
    
        
