N = int(input())

def is_harshad_number(n):
    sum_of_digits = sum([int(digit) for digit in str(n)])
    return n % sum_of_digits == 0

if is_harshad_number(N):
    print("Yes")
else:
    print("No")