# Step 1: Read the input values for A1, A2, and A3
A1, A2, A3 = map(int, input().split())

# Step 2: Initialize min_cost with a large value
min_cost = float('inf')

# Step 3: Iterate through all possible pairs of tasks
for i in range(1, 3):
    for j in range(i + 1, 4):
        # Step 3a: Calculate the cost for the current pair of tasks
        cost = abs(eval(f"A{j}") - eval(f"A{i}"))

        # Step 3b: Update min_cost if the calculated cost is less
        if cost < min_cost:
            min_cost = cost

# Step 4: Print min_cost as the minimum total cost required to complete all the tasks
print(min_cost)
