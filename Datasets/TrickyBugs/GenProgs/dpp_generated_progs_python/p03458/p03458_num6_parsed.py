from collections import defaultdict

# Read the input
N, K = map(int, input().split())

# Create two defaultdict objects to store the count of desires for each color in each K x K zone
black_zone_count = defaultdict(int)
white_zone_count = defaultdict(int)

# Iterate over the desires
for _ in range(N):
    x, y, c = input().split()
    # Calculate the index of the K x K zone that the desire belongs to
    zone_x = int(x) // K
    zone_y = int(y) // K
    zone_color = (zone_x + zone_y) % 2
    
    # Update the appropriate zone count based on the color of the desire
    if c == "B":
        black_zone_count[(zone_x, zone_y)] += 1
    elif c == "W":
        white_zone_count[(zone_x, zone_y)] += 1

# Calculate the maximum number of desires that can be satisfied at the same time
max_desires = 0
for zone, black_count in black_zone_count.items():
    white_count = white_zone_count[zone]
    max_desires += max(black_count, white_count)

# Print the result
print(max_desires)
