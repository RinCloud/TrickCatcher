import sys

def main():
    # Read input from standard input
    h, w, n = map(int, input().split())
    obstacles = []
    for _ in range(n):
        x, y = map(int, input().split())
        obstacles.append((x, y))

    # Initialize variables
    max_actions = 0  # Maximum number of actions Takahashi can perform
    grid = [[False] * w for _ in range(h)]  # Grid to keep track of obstacles

    # Loop through the obstacles and mark them on the grid
    for x, y in obstacles:
        grid[x - 1][y - 1] = True

    # Calculate the number of actions Takahashi can perform
    actions = 0
    x, y = 0, 0  # Starting position
    while True:
        # Check if Takahashi can move down
        if x + 1 < h and not grid[x + 1][y]:
            x += 1
            actions += 1
        # Check if Takahashi can move right
        elif y + 1 < w and not grid[x][y + 1]:
            y += 1
            actions += 1
        else:
            break

    # Print the number of actions Takahashi will end up performing
    print(actions)

if __name__ == '__main__':
    main()