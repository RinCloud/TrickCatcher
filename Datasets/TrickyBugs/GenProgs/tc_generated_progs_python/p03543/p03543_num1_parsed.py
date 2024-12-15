def is_good_number(n):
    return n % 1111 == 0 or (n % 1000) // 111 == 1 or (n % 100) // 11 == 1 or (n % 10) == 1


n = int(input())
if is_good_number(n):
    print("Yes")
else:
    print("No")
