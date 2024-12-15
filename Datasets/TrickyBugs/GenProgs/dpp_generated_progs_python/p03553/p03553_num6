# Get the input
N = int(input())
a = list(map(int, input().split()))

# Initialize the maximum amount of money that can be earned
max_earnings = 0

# Iterate from 1 to N
for x in range(1, N + 1):
    # Keep track of the number of gems smashed by this operation
    num_smashed_gems = 0
    for i in range(x, N + 1, x):
        # If the gem is not smashed, add its value to the earnings
        if a[i - 1] > 0:
            max_earnings += a[i - 1]
        # Count the smashed gems
        num_smashed_gems += 1

    # Break the loop if all gems are smashed
    if num_smashed_gems == N:
        break

# Print the maximum amount of money that can be earned
print(max_earnings)