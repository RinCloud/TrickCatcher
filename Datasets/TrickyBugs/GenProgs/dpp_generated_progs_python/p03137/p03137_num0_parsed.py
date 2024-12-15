import sys

def min_moves(N, M, X):
    # Sort the coordinates in ascending order
    X.sort()
    
    # Find the distance between consecutive coordinates
    distances = []
    for i in range(1, M):
        distances.append(abs(X[i] - X[i-1]))
    
    # Calculate the minimum number of moves required
    min_moves = sum(distances) - max(distances)
    
    return min_moves

# Read input from Standard Input
input_lines = sys.stdin.readlines()
N, M = map(int, input_lines[0].split())
X = list(map(int, input_lines[1].split()))

# Call the min_moves function and print the result
print(min_moves(N, M, X))