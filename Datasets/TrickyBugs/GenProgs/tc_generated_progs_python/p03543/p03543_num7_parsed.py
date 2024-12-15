a = int(input())
print("Yes" if (a // 1111) or (a // 111) % 10 == a % 10 else "No")
