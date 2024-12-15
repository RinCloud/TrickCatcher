from collections import defaultdict

# Reading input
N, K = map(int, input().split())
sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

# Sorting sushi based on deliciousness in descending order
sushi.sort(key=lambda x: -x[1])

# Creating a dictionary to keep track of the count of each topping
topping_count = defaultdict(int)

# List to store the deliciousness of eaten sushi
eaten_sushi_deliciousness = []

# Loop to find the maximum satisfaction
base_total_deliciousness = 0
variety_bonus = 0
for i in range(K):
    t, d = sushi[i]
    base_total_deliciousness += d
    topping_count[t] += 1
    eaten_sushi_deliciousness.append(d)

# Calculating the variety bonus
variety_bonus = sum([topping_count[t] ** 2 for t in topping_count])

# Calculating maximum satisfaction
max_satisfaction = base_total_deliciousness + variety_bonus

# Printing the maximum satisfaction
print(max_satisfaction)