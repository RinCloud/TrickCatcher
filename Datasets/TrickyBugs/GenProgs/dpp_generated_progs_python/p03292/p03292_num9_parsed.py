# Reading the input
a = list(map(int, input().split()))

# Sorting the tasks in ascending order of their costs
a.sort()

# Calculating the minimum cost required
min_cost = min(abs(a[0]-a[1]) + abs(a[1]-a[2]), abs(a[0]-a[2]) + abs(a[2]-a[1]))

# Printing the minimum cost
print(min_cost)