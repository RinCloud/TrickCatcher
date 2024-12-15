from collections import defaultdict

def solve(N, coordinates):
    MOD = 10 ** 9 + 7

    # Create dictionaries to store the balls with the same x and y coordinates
    balls_x = defaultdict(list)
    balls_y = defaultdict(list)
    for i, (x, y) in enumerate(coordinates):
        balls_x[x].append(i)
        balls_y[y].append(i)

    # Create dictionaries to store the robot counts
    robots_x = defaultdict(int)
    robots_y = defaultdict(int)

    # Initialize the count of robots and balls on each line
    count_robots = [0] * (2 * N)
    count_balls = [0] * (2 * N)
    for i in range(1, N + 1):
        count_robots[i] = 1
        count_robots[N + i] = 1
        count_balls[i] = len(balls_x[i])
        count_balls[N + i] = len(balls_y[i])

    # Initialize the result
    ans = 1

    # Iterate over each ball
    for i in range(2 * N):
        # Get the x and y coordinates of the ball
        x, y = coordinates[i]

        # If there are no robots on the same line as the ball, return 0
        if count_robots[x] == 0 or count_robots[N + y] == 0:
            return 0

        # Get the lowest x-coordinate and lowest y-coordinate ball on the same line as the robot
        x_min = min(balls_x[x])
        y_min = min(balls_y[y])

        # If the lowest x-coordinate and lowest y-coordinate balls are the same, increase the count of the robots and balls on the same line
        if x_min == y_min:
            robots_x[x] += 1
            robots_y[y] += 1
            count_robots[x] -= 1
            count_robots[N + y] -= 1
            count_balls[x] -= 1
            count_balls[N + y] -= 1

        # If the lowest x-coordinate ball is not the same as the lowest y-coordinate ball, return 0
        elif x_min < y_min:
            return 0

        # Calculate the answer
        ans = (ans * (i - x_min + 1)) % MOD

    return ans

# Read the input
N = int(input())
coordinates = []
for _ in range(2 * N):
    x, y = map(int, input().split())
    coordinates.append((x, y))

# Calculate and print the result
print(solve(N, coordinates))