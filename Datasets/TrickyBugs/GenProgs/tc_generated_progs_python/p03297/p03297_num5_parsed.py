**Repaired code**:

T = int(input())
ABCD = []
for i in range(T):
    a,b,c,d = map(int,input().split())
    ABCD.append((a,b,c,d))
    
for abcd in ABCD:
    a,b,c,d = abcd
    # Snuke can buy juice indefinitely
    if a >= b and d >= b:
        print("Yes")
    else:
        # Determine the stock status on the first day
        if a < b or d < b:
            print("No")
        else:
            # Find the first day the stock is less than or equal to C
            if c >= b:
                print("Yes")
            else:
                # Calculate the number of days until the stock is less than or equal to C
                e = a%b
                f = d%b
                list = [a]
                cnt = 0
                while cnt < 100:
                    g = ((c-e)//f+1)*f+e
                    if g < b:
                        print("No")
                        cnt += 10000
                    else:
                        if g in list:
                            print("Yes")
                            cnt += 10000
                        else:
                            list.append(g)
                            a = g
                            e = a%b
                            f = d%b
                            cnt += 1