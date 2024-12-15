'''
# Read the input
N = int(input())
towns = []
for _ in range(N):
    x, y = map(int, input().split())
    towns.append((x, y))

# Sort the towns based on their x coordinates
towns.sort()

# Calculate the minimum necessary amount of money
total_cost = 0
for i in range(1, N):
    total_cost += min(abs(towns[i][1] - towns[i-1][1]), abs(towns[i][0] - towns[i-1][0]))

# Print the result
print(total_cost)
'''