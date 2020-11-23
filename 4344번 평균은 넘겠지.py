c = int(input())
for i in range(c):
    n = list(map(int, input().split()))
    s = 0
    for i in range(1,n[0]+1) :
        s += n[i]
    mean = s/n[0]
    cnt = 0
    for score in n[1:]:
        if score > mean:
            cnt += 1
    rate = cnt/n[0] * 100
    print(f'{rate:.3f}%')
    



