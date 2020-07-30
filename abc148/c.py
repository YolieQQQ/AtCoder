import math
def lcm(x, y):
    return (x * y) // math.gcd(x, y)
if __name__ == '__main__':
    a, b = map(int, input().split())
    print(lcm(a, b))

