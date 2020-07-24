S = input()

gu = ['R', 'U', 'D']
ki = ['L', 'U', 'D']
flag = True
for i, s in enumerate(S):
    if i%2==0:
        if s in gu:
            pass
        else:
            flag = False
            break
    else:
        if s in ki:
            pass
        else:
            flag = False
            break

if flag:
    print('Yes')
else:
    print("No")

    

