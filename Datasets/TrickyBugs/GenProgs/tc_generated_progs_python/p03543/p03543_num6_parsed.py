N = int(input())

digits = [int(digit) for digit in str(N)]

if digits[0] == digits[1] == digits[2] or digits[1] == digits[2] == digits[3]:
    print("Yes")
else:
    print("No")
