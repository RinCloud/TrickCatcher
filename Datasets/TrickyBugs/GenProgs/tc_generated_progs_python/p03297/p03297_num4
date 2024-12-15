T = int(input())

ABCD = []
for i in range(T):
    a,b,c,d = map(int,input().split())
    ABCD.append((a,b,c,d))

for abcd in ABCD:
    a,b,c,d = abcd
    # 初日にダメになる
    if a < b:
        print("No")
    # 在庫補充が追いつかない
    elif d < b:
        print("No")
    # 補充タイミングが十分に早い
    elif c >= b:
        print("Yes")
    else:
        e = a%b
        f = d%b
        lst = [a]
        if f==0:
            if c<e<b:
                print("No")
            else:
                print("Yes") 
        else:
            cnt = 0
            while cnt < 100:
                g = ((c-e)//f+1)*f+e
                if g < b:
                    print("No")
                    cnt += 10000
                else:
                    if g in lst:
                        print("Yes")
                        cnt += 10000
                    else:
                        lst.append(g)
                        a = g
                        e = a%b
                        f = d%b
                        cnt += 1