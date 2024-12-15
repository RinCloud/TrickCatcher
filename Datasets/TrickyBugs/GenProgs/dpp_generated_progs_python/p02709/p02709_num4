# Function to calculate maximum total happiness points
def calculate_happiness_points(N, children):
    # Sort the children in non-decreasing order
    children.sort()

    # Initializing total happiness points
    total_points = 0

    # Calculate the total happiness points
    for i in range(N):
        total_points += children[i] * abs(i - (N - i - 1))

    # Return the maximum total happiness points
    return total_points

# Read the input value of N
N = int(input())

# Read the input values of children
children = list(map(int, input().split()))

# Calculate and print the maximum total happiness points
print(calculate_happiness_points(N, children))