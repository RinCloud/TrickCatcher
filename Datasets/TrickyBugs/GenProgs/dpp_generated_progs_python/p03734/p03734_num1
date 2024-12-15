# Python program for the Knapsack problem
def knapSack(W, wt, val, n):
	"""
	Returns the maximum value that can be put in a knapsack of capacity W
	:param W: maximum weight capacity of the knapsack
	:param wt: list of weights of the items
	:param val: list of values of the items
	:param n: total number of items
	:return: maximum value
	"""
	# Base Case
	if n == 0 or W == 0:
		return 0

	# If weight of the nth item is more than Knapsack capacity W,
	# then this item cannot be included in the optimal solution
	if wt[n-1] > W:
		return knapSack(W, wt, val, n-1)

	# Return the maximum of two cases:
	# (1) nth item included
	# (2) not included
	else:
		return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
				   knapSack(W, wt, val, n-1))

# Driver code to test the above function
N, W = map(int, input().strip().split())
wt = []
val = []
for _ in range(N):
	w, v = map(int, input().strip().split())
	wt.append(w)
	val.append(v)

print(knapSack(W, wt, val, N))