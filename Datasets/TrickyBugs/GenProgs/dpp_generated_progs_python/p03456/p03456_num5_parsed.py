a, b = map(int, input().split())

num = int(str(a) + str(b))

if int(num**0.5)**2 == num:
    print("Yes")
else:
    print("No")