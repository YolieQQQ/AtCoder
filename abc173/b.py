from typing import List
N = int(input())
AC = 0
WA = 0
TLE = 0
RE = 0
for i in range(N):
    x = input()
    if(x=='AC'):
        AC += 1
    elif(x=='WA'):
        WA += 1
    elif(x=='TLE'):
        TLE += 1
    else:
        RE += 1

print('AC', 'x', AC)
print('WA', 'x', WA)
print('TLE', 'x', TLE)
print('RE', 'x', RE)