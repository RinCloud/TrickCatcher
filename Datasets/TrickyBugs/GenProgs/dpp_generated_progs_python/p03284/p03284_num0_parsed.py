import math

N, K = map(int, input().split())

# Distribute crackers evenly among users
crackers_per_user = N // K

# Calculate the remaining crackers
remaining_crackers = N % K

# Calculate the minimum possible difference
minimum_difference = math.ceil(remaining_crackers / K)

# Print the minimum possible difference
print(minimum_difference)