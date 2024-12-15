n = int(input())

if n < 4:
    print("No")
elif n % 4 == 0 or n % 7 == 0 or n % 11 == 0:
    print("Yes")
elif ((n - 4) % 7 == 0 or (n - 4) % 11 == 0) or ((n - 7) % 4 == 0 or (n - 7) % 11 == 0) or ((n - 11) % 4 == 0 or (n - 11) % 7 == 0):
    print("Yes")
else:
    print("No")
