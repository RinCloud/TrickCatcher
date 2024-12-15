# Prompting user input for number for individual gems
N = int(input())

# Prompting user input for value of each gem
values = list(map(int, input().split()))

# Prompting user input for cost of each gem
costs = list(map(int, input().split()))

# Initializing X and Y
X = 0
Y = 0

# Iterating through each gem
for i in range(N):
    # Checking if the value of the gem is greater
    # than the cost and updating X and Y accordingly
    if values[i] > costs[i]:
        X += values[i]
        Y += costs[i]

# Printing the maximum possible value of X-Y
print(X - Y)