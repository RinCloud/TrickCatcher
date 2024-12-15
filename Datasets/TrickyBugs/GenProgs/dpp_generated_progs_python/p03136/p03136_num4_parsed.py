# Generate a function that takes `N` and `L` as input and returns "Yes" or "No" based on whether an N-sided polygon satisfying the condition can be drawn.

def can_draw_polygon(N, L):
    # Sort the list of side lengths in ascending order
    L.sort()
    
    # The longest side length is the last element in the sorted list
    longest_side = L[-1]
    
    # The sum of the lengths of the other N-1 sides is the sum of all elements except the last one
    sum_other_sides = sum(L[:-1])
    
    # Check if the longest side is strictly shorter than the sum of the other sides
    if longest_side < sum_other_sides:
        return "Yes"
    else:
        return "No"

# Read the input values from standard input
N = int(input())
L = list(map(int, input().split()))

# Call the function with the input values and print the result
result = can_draw_polygon(N, L)
print(result)