n = int(input())

if n % 4 == 0 or n % 7 == 0 or (n >= 8 and (n - 8) % 4 == 0) or (n >= 15 and (n - 15) % 7 == 0):
    print("Yes")
else:
    print("No")