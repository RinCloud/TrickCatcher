import sys

def find_nearest_integer(X, N, sequence):
    closest_integer = X
    min_distance = sys.maxsize
    
    for i in range(1, 101):
        if i not in sequence:
            distance = abs(i - X)
            if distance < min_distance or (distance == min_distance and i < closest_integer):
                closest_integer = i
                min_distance = distance
    
    return closest_integer


# Read the input from Standard Input
X, N = map(int, input().split())
sequence = list(map(int, input().split()))

# Find the nearest integer
result = find_nearest_integer(X, N, sequence)

# Print the result
print(result)