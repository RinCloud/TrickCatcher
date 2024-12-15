# Read input values
N = int(input())
T = list(map(int, input().split()))
M = int(input())

# Initialize a list to store the result
results = []

# Iterate through each drink
for i in range(M):
    P, X = map(int, input().split())
    total_time = sum(T) - T[P-1] + X
    results.append(total_time)

# Output the results
for result in results:
    print(result)