Q, H, S, D = map(int, input().split())
N = int(input())

# Calculate the total cost for each bottle size
total_cost_025 = Q * N * 4  # cost for 0.25-liter bottles
total_cost_05 = H * N * 2  # cost for 0.5-liter bottles
total_cost_1 = S * N  # cost for 1-liter bottles
total_cost_2 = D * (N // 2) + S * (N % 2)  # cost for 2-liter bottles

# Find the minimum cost
minimum_cost = min(total_cost_025, total_cost_05, total_cost_1, total_cost_2)

print(minimum_cost)