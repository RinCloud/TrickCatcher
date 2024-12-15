# Read the inputs
Q, H, S, D = map(int, input().split())
N = int(input())

# Calculate the total cost in yen
# We will consider buying the cheapest option to achieve the desired liters
# 0.25-liter bottle is the cheapest option
total_cost = (N // 2) * min(8 * Q, 4 * H, 2 * S, D)

# If there are some remaining liters, we need to consider the cost of buying the smaller bottles
remaining_liters = N % 2
if remaining_liters == 1:
    total_cost += min(4 * Q, 2 * H, S)

# Print the result
print(total_cost)