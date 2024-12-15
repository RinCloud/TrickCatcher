n = int(input())
if n < 4:
    print("No")
elif n % 4 == 0 or n % 7 == 0 or n % 11 == 0:
    print("Yes")
else:
    for i in range(1, n // 4 + 1):
        remaining = n - i * 4
        if remaining % 7 == 0 or remaining % 11 == 0:
            print("Yes")
            break
    else:
        print("No")
