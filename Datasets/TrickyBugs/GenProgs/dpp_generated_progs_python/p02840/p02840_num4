# Getting the input values
N, X, D = map(int, input().split())

# If D is 0, only one possible value of S - T
if D == 0:
    print(1)
    exit()

# If X is 0, there will be N+1 possible values of S - T
if X == 0:
    print(N+1)
    exit()

# Calculate the minimum and maximum possible values of S - T
min_val = min(X % D, D - X % D)
max_val = min(D * N - X, X)

# Calculate the number of possible values of S - T
num_possible_vals = (max_val - min_val) // abs(D) + 1

print(num_possible_vals)