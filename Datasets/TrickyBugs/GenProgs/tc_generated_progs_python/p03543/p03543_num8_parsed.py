a = int(input())
print("Yes" if ((a // 1000 == a // 100 % 10 == a // 10 % 10) or (a // 100 % 10 == a // 10 % 10 == a % 10)) else "No")