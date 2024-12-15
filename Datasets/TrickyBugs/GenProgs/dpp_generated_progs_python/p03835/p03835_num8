# Program to count number of different assignments of values to X, Y and Z such that X + Y + Z = S

# Function to calculate number of assignments
def count_assignments(K, S):
    count = 0 # Initialize count variable to 0
    
    for X in range(K+1):
        for Y in range(K+1):
            Z = S - X - Y # Calculate Z based on X and Y
            if 0 <= Z <= K: # Check if Z is within the valid range
                count += 1 # Increment count if assignment satisfies condition
    
    return count

# Read input from standard input
K, S = map(int, input().split())

# Calculate the number of assignments
num_assignments = count_assignments(K, S)

# Print the result
print(num_assignments)