# Program:

n = int(input())
heights = list(map(int, input().split()))

# minimum height of the stool needed to meet the goal
min_height = 0

# iterate from the back of the row
for i in range(n-1, 0, -1):
    # calculate the required height for the current person
    required_height = max(heights[i-1] - heights[i] + 1, 0)
    # update the minimum height needed
    min_height += required_height
    # update the height of the current person to include the stool
    heights[i-1] = max(heights[i-1], heights[i] + required_height)

print(min_height)