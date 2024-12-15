# Program:

# Taking input of N, X, D
N, X, D = map(int, input().split())

# If D is 0, then there is only one possible value of S-T i.e. S-T = X
if D == 0:
    print(1)
    exit()

# To store the count of possible values of S-T
count = 0

# Case 1: If D < 0 i.e. sequence is decreasing
if D < 0:
    # Make D positive for calculating index properly
    D = -D
    # If X is non-positive, there is only one possible value of S-T i.e. S-T = X
    if X <= 0:
        count += 1
    # Find the maximum value of K for S-T <= 0
    k_max = X // D
    # Find the minimum value of K for S-T >= N
    k_min = (X - (N - 1) * D) // D
    # If k_min > 0, then there are no possible values of S-T
    if k_min > 0:
        print(0)
        exit()
    # Find the range of K for which there are possible values of S-T
    k_range = -(k_min - 1) + k_max
    # Calculate the count of possible values of S-T
    count += (N + k_min) * (N + k_min - 1) // 2 - k_range * (k_range - 1) // 2

# Case 2: If D > 0 i.e. sequence is increasing
else:
    # If X is non-negative, there is only one possible value of S-T i.e. S-T = X
    if X >= 0:
        count += 1
    # Find the maximum value of K for S-T >= 0
    k_max = (N - 1 - X) // D
    # Find the minimum value of K for S-T <= N
    k_min = (-X) // D
    # If k_min > 0, then there are no possible values of S-T
    if k_min > 0:
        print(0)
        exit()
    # Find the range of K for which there are possible values of S-T
    k_range = -(k_min - 1) + k_max
    # Calculate the count of possible values of S-T
    count += (N + k_min) * (N + k_min - 1) // 2 - k_range * (k_range - 1) // 2

print(count)