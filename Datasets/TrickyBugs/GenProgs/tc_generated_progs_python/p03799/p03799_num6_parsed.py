n, m = map(int, input().split())

if n < m//2:
    print(n)
else:
    print((n*2+m)//4)
