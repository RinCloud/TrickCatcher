a, b = map(int, input().split())
x = int(str(a) + " " + str(b))
print("Yes" if x % int(x**0.5) == 0 else "No")
