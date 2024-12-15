N = int(input())

def is_harshad(n):
    digits_sum = sum([int(digit) for digit in str(n)])
    return n % digits_sum == 0

if is_harshad(N):
    print("Yes")
else:
    print("No")