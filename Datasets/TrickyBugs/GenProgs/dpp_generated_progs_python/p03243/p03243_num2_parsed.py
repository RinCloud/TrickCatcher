n = int(input())

x = int(n / 111)

if n % 111 == 0:
    print(x * 111)
else:
    print((x + 1) * 111)