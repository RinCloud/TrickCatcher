from collections import defaultdict

def find_max_operations(N, coordinates):
    # Create a dictionary to store the coordinates of each point
    points = defaultdict(list)
    for i, (x, y) in enumerate(coordinates):
        points[x].append((y, i))
    
    # Sort the list of x-coordinates in ascending order
    sorted_x = sorted(points.keys())
    max_operations = 0
    
    # Iterate over the x-coordinates
    for i in range(len(sorted_x)):
        x1 = sorted_x[i]
        x2 = sorted_x[i+1] if i+1 < len(sorted_x) else None
        
        # Iterate over the y-coordinates of the current x-coordinate
        for j in range(len(points[x1])):
            # Get the y-coordinate and index of the current point
            y1, idx1 = points[x1][j]
            
            # Check if there is a point with the same y-coordinate in the next x-coordinate
            if x2 and (y1, idx1) in points[x2]:
                # Get the index of the next point
                idx2 = points[x2].index((y1, idx1))
                
                # Check if there is a point with the same x-coordinate as the next point
                if (x2, idx2) in points[x1]:
                    # Get the index of the next next point
                    idx3 = points[x1].index((x2, idx2))
                    
                    # Check if there are two points with the same y-coordinate as the next next point
                    if (x1, idx3) in points[x2]:
                        max_operations += 1
    
    return max_operations

# Read the input
N = int(input())
coordinates = []
for _ in range(N):
    x, y = map(int, input().split())
    coordinates.append((x, y))

# Find the maximum number of operations
max_operations = find_max_operations(N, coordinates)

# Print the result
print(max_operations)