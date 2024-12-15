import sys


def solve(n, red_points, blue_points):
    red_points.sort(key=lambda x: (x[0], x[1]))
    blue_points.sort(key=lambda x: (x[0], x[1]))
    
    pairs = 0
    for red in red_points:
        min_y = sys.maxsize
        min_blue = None
        
        for blue in blue_points:
            if blue[0] <= red[0] or blue[1] <= red[1]:
                continue
            if blue[1] < min_y:
                min_y = blue[1]
                min_blue = blue
        
        if min_blue:
            pairs += 1
            blue_points.remove(min_blue)
    
    return pairs


# Read input
n = int(input())
red_points = []
blue_points = []
for _ in range(n):
    a, b = map(int, input().split())
    red_points.append((a, b))
for _ in range(n):
    c, d = map(int, input().split())
    blue_points.append((c, d))

# Solve the problem
result = solve(n, red_points, blue_points)

# Print the result
print(result)