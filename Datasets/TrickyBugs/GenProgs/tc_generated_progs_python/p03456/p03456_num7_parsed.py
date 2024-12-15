a, b = map(int, input().split())
x = int(str(a) + str(b))
print("Yes" if x ** 0.5 == int(x ** 0.5) else "No")
