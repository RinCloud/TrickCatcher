# Given standard inputs
H, W, N = map(int, input().split())

# Creating a set of obstacles
obstacles = set()
for _ in range(N):
    x, y = map(int, input().split())
    obstacles.add((x, y))

# Total number of actions performed by Takahashi
actions = 0

# Current position of the piece
x, y = 1, 1

# Keep moving the piece until it does not move twice in a row
while True:
    # Check if the next cell is valid
    if (x, y + 1) not in obstacles and y + 1 <= W:
        y += 1
        actions += 1
    elif (x + 1, y) not in obstacles and x + 1 <= H:
        x += 1
        actions += 1
    else:
        break

# Printing the number of actions performed by Takahashi
print(actions)