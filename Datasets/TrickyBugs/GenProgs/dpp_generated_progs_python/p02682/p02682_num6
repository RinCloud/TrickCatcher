# Given Inputs
A, B, C, K = map(int, input().split())

# Calculate maximum possible sum of the numbers written on the cards chosen
if K <= A:
    max_sum = K
elif K <= A+B:
    max_sum = A
else:
    max_sum = A - (K - A - B)

# Print the maximum possible sum
print(max_sum)