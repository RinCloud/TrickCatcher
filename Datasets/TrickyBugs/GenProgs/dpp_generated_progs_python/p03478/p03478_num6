N, A, B = map(int, input().split())

total_sum = 0
for num in range(1, N+1):
    digit_sum = sum([int(digit) for digit in str(num)])
    if A <= digit_sum <= B:
        total_sum += num

print(total_sum)