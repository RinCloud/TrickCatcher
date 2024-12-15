N = int(input())

# Calculate the sum of the digits in N
digit_sum = 0
for digit in str(N):
    digit_sum += int(digit)

# Check if the sum of digits is a multiple of 9
if digit_sum % 9 == 0:
    print("Yes")
else:
    print("No")