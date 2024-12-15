n, k = map(int, input().split())

# Distribute crackers evenly among the users
min_crackers = n // k
remaining_crackers = n % k

# Add remaining crackers to some of the users
max_crackers = min_crackers + min(remaining_crackers, 1)

# Calculate the minimum possible difference between the largest and smallest number of crackers received
min_difference = max_crackers - min_crackers

print(min_difference)
