# Given Input
P, Q, R = map(int, input().split())

# Calculate the minimum sum of flight times
min_sum = min(P + Q, Q + R, R + P)

# Print the minimum sum of flight times
print(min_sum)