def find_maximum_rectangle_area(N, sticks):
    # Sort the sticks in descending order
    sticks.sort(reverse=True)
    
    area = 0
    
    for i in range(N-3):
        # Check if a rectangle can be formed using current stick as the base
        if sticks[i] == sticks[i+1]:
            area = max(area, sticks[i] * min(sticks[i+2], sticks[i+3]))
    
    return area

# Read input
N = int(input())
sticks = list(map(int, input().split()))

# Find maximum rectangle area
max_area = find_maximum_rectangle_area(N, sticks)

# Output the maximum possible area
print(max_area)