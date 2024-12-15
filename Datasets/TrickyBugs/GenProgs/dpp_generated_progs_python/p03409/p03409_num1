# Program

def count_friendly_pairs(N, red_points, blue_points):
    count = 0
    
    # Sort the red points and blue points based on their x-coordinate
    red_points.sort(key=lambda x: x[0])
    blue_points.sort(key=lambda x: x[0])
    
    for red_point in red_points:
        for blue_point in blue_points:
            if red_point[0] < blue_point[0] and red_point[1] < blue_point[1]:
                count += 1
                break
            
    return count


# Read input from stdin
N = int(input())
red_points = [list(map(int, input().split())) for _ in range(N)]
blue_points = [list(map(int, input().split())) for _ in range(N)]

# Call the function and print the output
print(count_friendly_pairs(N, red_points, blue_points))