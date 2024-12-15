# Solution:

def is_possible_polygon(N, sides):
    longest_side = max(sides)
    sum_of_other_sides = sum(sides) - longest_side
    if longest_side < sum_of_other_sides:
        return "Yes"
    else:
        return "No"

# Read input
N = int(input())
sides = list(map(int, input().split()))

# Check if polygon is possible
result = is_possible_polygon(N, sides)

# Print the result
print(result)