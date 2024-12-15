import sys

def main():
    # Read input
    N = int(input())
    red_points = []
    blue_points = []
    for _ in range(N):
        a, b = map(int, input().split())
        red_points.append((a, b))
    for _ in range(N):
        c, d = map(int, input().split())
        blue_points.append((c, d))
    
    # Sort the points by x-coordinate in ascending order
    red_points.sort(key=lambda x: x[0])
    blue_points.sort(key=lambda x: x[0])
    
    # Initialize the count of friendly pairs to 0
    count = 0
    
    # Iterate over the points and count the friendly pairs
    for red_point in red_points:
        for blue_point in blue_points:
            if red_point[0] < blue_point[0] and red_point[1] < blue_point[1]:
                count += 1
                # Remove the blue point from the list to avoid duplicate counting
                blue_points.remove(blue_point)
                break
    
    # Print the maximum number of friendly pairs
    print(count)

if __name__ == '__main__':
    main()