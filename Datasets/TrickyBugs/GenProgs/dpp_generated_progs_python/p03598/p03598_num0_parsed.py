def calculate_min_distance(N, K, x):
    # Sort the list of ball positions
    x.sort()
    
    min_distance = 0
    
    # Calculate the distance covered by type-A robots
    for i in range(N):
        min_distance += min(abs(x[i] - 0), abs(x[i] - K))
    
    return min_distance

# Read inputs
N = int(input())
K = int(input())
x = list(map(int, input().split()))

# Calculate and print the minimum possible total distance covered by robots
print(calculate_min_distance(N, K, x))