def find_sets_of_robots(N, robots):
    # Sort the robots based on their initial coordinate
    robots.sort(key=lambda x: x[0])

    # Initialize the count of possible sets of robots
    count = 0

    # Create a list to keep track of activated robots
    activated = [False] * N

    # Iterate through each robot
    for i in range(N):
        # If the robot is already activated, skip it
        if activated[i]:
            continue

        # Activate the current robot
        activated[i] = True

        # Update the count
        count += 1

        # Initialize the range of the current set of robots
        start = robots[i][0]
        end = robots[i][0] + robots[i][1] - 1

        # Iterate through the remaining robots
        for j in range(i+1, N):
            # If the robot is already activated or outside the range, skip it
            if activated[j] or robots[j][0] > end:
                continue

            # Activate the current robot and update the range
            activated[j] = True
            end = max(end, robots[j][0] + robots[j][1] - 1)

    return count % 998244353


# Read the input
N = int(input())
robots = []
for _ in range(N):
    X, D = map(int, input().split())
    robots.append((X, D))

# Calculate and print the number of possible sets of robots
print(find_sets_of_robots(N, robots))