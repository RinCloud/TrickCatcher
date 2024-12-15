# We can solve this problem by checking all possible quadruples of points and counting how many of them satisfy the condition mentioned in the problem statement.

from collections import defaultdict

def solve(N, points):
    # Create a dictionary to store the count of each y-coordinate for a given x-coordinate
    count = defaultdict(int)

    # Iterate through each point and count the occurrences of each y-coordinate
    for point in points:
        x, y = point
        count[x] += 1

    # Initialize the result to be 0
    result = 0

    # Iterate through each point
    for point in points:
        x, y = point
        
        # Iterate through all other points
        for other_point in points:
            if point == other_point:
                continue

            a, b = other_point
            c, d = x, y

            # Check if the condition for the operation is satisfied
            if count[a] > 0 and count[b] > 0 and count[c] > 0 and count[d] > 0:
                result += 1

    # Return the final result
    return result // 4

# Read the input from the standard input
N = int(input())
points = [tuple(map(int, input().split())) for _ in range(N)]

# Call the solve function and print the result
print(solve(N, points))