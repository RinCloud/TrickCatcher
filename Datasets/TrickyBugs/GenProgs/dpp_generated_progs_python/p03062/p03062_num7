# Program:

N = int(input())
A = list(map(int, input().split()))

# Count the number of negative integers
neg_count = sum(1 for num in A if num < 0)

# If there are an odd number of negative integers, multiply the smallest absolute value by -1
if neg_count % 2 == 1:
    min_abs = float('inf')
    for num in A:
        if abs(num) < min_abs:
            min_abs = abs(num)
    B = [num * -1 if abs(num) == min_abs else num for num in A]
else:
    B = A

# Calculate the sum of the updated sequence
sum_B = sum(B)

print(sum_B)