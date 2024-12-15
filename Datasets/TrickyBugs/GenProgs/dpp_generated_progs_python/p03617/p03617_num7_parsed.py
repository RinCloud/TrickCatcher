# Read input values
Q, H, S, D = map(int, input().split())
N = int(input())

# Calculate the cost of buying each bottle individually
cost_025 = Q * 4  # cost for 0.25-liter bottle
cost_05 = H * 2  # cost for 0.5-liter bottle
cost_1 = S  # cost for 1-liter bottle
cost_2 = D / 2  # cost for 2-liter bottle

# Calculate total cost to buy N liters of ice tea
if N >= 2:
    total_cost = min(cost_025, cost_05, cost_1, cost_2) * (N // 2) + min(cost_025, cost_05, cost_1) * (N % 2)
else:
    total_cost = min(cost_025, cost_05, cost_1) * N

# Print the smallest number of yen needed
print(int(total_cost))