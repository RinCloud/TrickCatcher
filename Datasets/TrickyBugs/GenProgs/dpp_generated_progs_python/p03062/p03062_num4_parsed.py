
# Read the input value of N
N = int(input())

# Read the input list of integers
A = list(map(int, input().split()))

# Initialize the sum of B_i
sum_B = 0

# Count the number of negative integers in A
count_neg = sum(1 for num in A if num < 0)

# If the count of negative integers is even
if count_neg % 2 == 0:
    # Simply add all the integers in A to the sum of B_i
    sum_B = sum(A)
# If the count of negative integers is odd
else:
    # Find the absolute value of the smallest negative integer in A
    min_neg = min(abs(num) for num in A if num < 0)
    # Subtract twice the value of min_neg from the sum of all integers in A
    sum_B = sum(A) - 2 * min_neg

# Print the maximum possible value of B_1 + B_2 + ... + B_N
print(sum_B)

