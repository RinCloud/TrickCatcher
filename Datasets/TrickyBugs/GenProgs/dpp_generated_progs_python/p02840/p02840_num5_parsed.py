# Taking input
N, X, D = map(int, input().split())

# If D is 0, then all numbers will be the same and S - T can be only 0
if D == 0:
    print(1)
    exit()

# Handling negative D
if D < 0:
    # We want D to be positive for simplicity. So we change sign of D, X and the result.
    D = -D
    X = -X

# Dictionary to store the count of each value of S - T
count = {}

# Loop through the possible values of Takahashi's first number
for i in range(N+1):
    # Calculate Takahashi's sum for this value of first number
    S = (2*X + (i-1)*D)*i // 2

    # Calculate Aoki's sum by subtracting Takahashi's sum from the total sum
    T = (N*(2*X + (N-1)*D) - (2*X + (i-1)*D)*i) // 2

    # Calculate S - T
    diff = S - T

    # Increase the count of this diff
    count[diff] = count.get(diff, 0) + 1

# Print the number of unique values of S - T
print(len(count))