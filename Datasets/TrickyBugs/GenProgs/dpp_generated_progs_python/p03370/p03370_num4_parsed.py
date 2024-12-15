# Taking input from user
N, X = map(int, input().split())

# Initializing variables
m = []
total_doughnuts = 0

# Taking input for m_i
for i in range(N):
    m.append(int(input()))

# Sorting m in ascending order
m.sort()

# Making at least one doughnut of each kind
for i in range(N):
    X -= m[i]
    total_doughnuts += 1

# Making as many doughnuts as possible
while X >= min(m):
    X -= min(m)
    total_doughnuts += 1

# Printing the maximum number of doughnuts that can be made
print(total_doughnuts)