import itertools

def find_max_rectangle_area(N, sticks):
    max_area = 0
    for comb in itertools.combinations(sticks, 4):
        if comb[0] == comb[1] and comb[2] == comb[3]:  # Check if we have a rectangle
            area = comb[0] * comb[2]
            max_area = max(max_area, area)
    return max_area

# Read input N
N = int(input())

# Read input sticks
sticks = list(map(int, input().split()))

# Call the function to find maximum area
max_area = find_max_rectangle_area(N, sticks)

# Print the result
print(max_area)