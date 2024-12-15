# Here is one possible approach to solve this problem:

# Step 1: Read the input values
N = int(input())
towns = []
for _ in range(N):
    x, y = map(int, input().split())
    towns.append((x, y))

# Step 2: Sort the towns based on their x-coordinate and y-coordinate
towns.sort()

# Step 3: Calculate the cost of building roads
total_cost = 0
for i in range(1, N):
    x1, y1 = towns[i-1]
    x2, y2 = towns[i]
    cost = min(abs(x1 - x2), abs(y1 - y2))
    total_cost += cost

# Step 4: Print the minimum necessary amount of money
print(total_cost)