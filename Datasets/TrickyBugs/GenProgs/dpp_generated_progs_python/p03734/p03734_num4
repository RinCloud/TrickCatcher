# Python program to solve the 0/1 Knapsack Problem

# Function to solve the knapsack problem
def knapSack(N, W, weights, values):
	# Initialize a table to store the maximum value obtained for each weight
	table = [[0 for x in range(W + 1)] for x in range(N + 1)]

	# Build the table
	for i in range(N + 1):
		for w in range(W + 1):
			if i == 0 or w == 0:
				table[i][w] = 0
			elif weights[i - 1] <= w:
				table[i][w] = max(values[i - 1] + table[i - 1][w - weights[i - 1]], table[i - 1][w])
			else:
				table[i][w] = table[i - 1][w]

	# Return the maximum value
	return table[N][W]

# Read the input values
N, W = map(int, input().split())

# Initialize empty lists for weights and values
weights = []
values = []

# Read the weights and values of the items
for _ in range(N):
	w, v = map(int, input().split())
	weights.append(w)
	values.append(v)

# Call the function to solve the knapsack problem
result = knapSack(N, W, weights, values)

# Print the maximum possible total value of the selected items
print(result)