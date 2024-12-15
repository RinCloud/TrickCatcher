import itertools

def find_max_rectangle_area(N, sticks):
    # Sort the list of sticks in descending order
    sticks.sort(reverse=True)

    max_area = 0

    # Iterate over all possible combinations of 4 sticks
    for combination in itertools.combinations(sticks, 4):
        # Check if the combination can form a rectangle
        if combination[0] == combination[1] and combination[2] == combination[3]:
            # Calculate the area of the rectangle
            area = combination[0] * combination[2]
            # Update the maximum area if necessary
            max_area = max(max_area, area)

    return max_area

# Read the input values
N = int(input())
sticks = list(map(int, input().split()))

# Compute and print the maximum possible area of the rectangle
print(find_max_rectangle_area(N, sticks))