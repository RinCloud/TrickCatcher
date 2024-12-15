from copy import deepcopy

# Read input values
N = int(input())
a0 = list(map(int, input().split()))

# Initialize a variable to store the maximum amount of money
max_money = 0

# Iterate through all possible values of x to find the maximum amount of money that can be earned
for x in range(1, N+1):
    # Create a deepcopy of the gemstone values list
    a = deepcopy(a0)

    # Smash the gems labeled with multiples of x
    for i in range(x, N+1, x):
        a[i-1] = 0

    # Calculate the total amount of money that can be earned
    total_money = sum([a[i] for i in range(N) if a[i] > 0])

    # Update the maximum amount of money if necessary
    if total_money > max_money:
        max_money = total_money

# Print the maximum amount of money that can be earned
print(max_money)
