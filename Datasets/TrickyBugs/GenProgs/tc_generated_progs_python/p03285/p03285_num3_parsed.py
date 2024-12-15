n = int(input())

if n % 4 == 0 or n % 7 == 0 or n % 11 == 0:
    print("Yes")
elif n >= 14 and (n - 14) % 4 == 0:
    print("Yes")
elif n >= 21 and (n - 21) % 7 == 0:
    print("Yes")
else:
    print("No")
