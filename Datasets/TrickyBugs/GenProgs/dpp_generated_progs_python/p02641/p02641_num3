import sys

def nearest_integer(X, N, p):
    # Create a set to store the integers in the sequence
    sequence = set(p)

    # Initialize the closest integer to None
    closest = None
    
    # Iterate over all integers not in the sequence
    for i in range(1, X+1):
        if i not in sequence:
            # If closest is None, set closest to i
            if closest is None:
                closest = i
            else:
                # Check if the absolute difference between i and X is smaller than the absolute difference between closest and X
                if abs(i - X) < abs(closest - X):
                    closest = i
                # If the absolute difference is the same, update closest with the smaller integer
                elif abs(i - X) == abs(closest - X):
                    closest = min(i, closest)
    
    return closest

# Read the input from standard input
input_lines = sys.stdin.readlines()
X, N = map(int, input_lines[0].split())
p = list(map(int, input_lines[1].split()))

# Call the nearest_integer function and print the result
result = nearest_integer(X, N, p)
print(result)