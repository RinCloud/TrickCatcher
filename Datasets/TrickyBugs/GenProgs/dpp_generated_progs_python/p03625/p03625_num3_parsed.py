def find_max_rectangle_area(N, sticks):
    # sort the sticks in non-decreasing order
    sticks.sort()
    
    max_area = 0
    
    # iterate through all possible combinations of 4 sticks
    for i in range(N-3):
        for j in range(i+1, N-2):
            for k in range(j+1, N-1):
                for l in range(k+1, N):
                    # check if the selected sticks can form a rectangle
                    if sticks[i] == sticks[j] and sticks[k] == sticks[l]:
                        # calculate the area of the rectangle
                        area = sticks[i] * sticks[k]
                        # update the maximum area if necessary
                        max_area = max(max_area, area)
    
    return max_area

# parse the input
N = int(input())
sticks = list(map(int, input().split()))

# find and print the maximum possible area of the rectangle
print(find_max_rectangle_area(N, sticks))