Q, H, S, D = map(int, input().split())
N = int(input())

# Calculate the cost for each bottle size
cost_025 = Q * 0.25
cost_05 = H * 0.5
cost_1 = S
cost_2 = D * 2

# Calculate the minimum cost
min_cost = float('inf')

# Loop through all possible combinations
for i in range(N+1):
    for j in range(N+1-i):
        liters_025 = i * 0.25
        liters_05 = j * 0.5
        liters_1 = (N - i - j) * 1
        
        # Calculate the total cost for this combination
        total_cost = cost_025 * liters_025 + cost_05 * liters_05 + cost_1 * liters_1 + cost_2 * (N - liters_025 - liters_05 - liters_1)
        
        # Update the minimum cost if necessary
        if total_cost < min_cost:
            min_cost = total_cost

# Print the minimum cost
print(int(min_cost))