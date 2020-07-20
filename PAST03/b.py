N, M, QNum = map(int, input().split())

score = [0]+[N]*M

for i in range(QNum):
    Query = list(map(int, input().split()))
    if Query[0]==1:
        pass
        print(score[Query[1]])
    else:
        score[Query[2]] -= 1

for s in score:
    print(s)