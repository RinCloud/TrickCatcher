'''
# Read input from standard input
N = int(input())
sticks = list(map(int, input().split()))

# Sort the sticks in non-decreasing order
sticks.sort()

# Initialize the maximum area to 0
max_area = 0

# Iterate over the sticks from the largest to the smallest
for i in range(N - 3):
    # If the current stick cannot form a square, move to the next one
    if sticks[i] != sticks[i + 1]:
        continue
    
    # Calculate the area of the rectangle formed by the current stick and the two adjacent sticks
    area = sticks[i] * sticks[i + 2]
    
    # Update the maximum area if necessary
    if area > max_area:
        max_area = area

# Print the maximum possible area of the rectangle
print(max_area)
'''