def possible_sets_of_robots(N, robots):
  mod = 998244353

  # Sort the robots based on their coordinates
  robots.sort(key=lambda x: x[0])

  # Initialize a list to keep track of which robots are active
  active_robots = [False] * N

  # Initialize a variable to store the count of remaining sets
  remaining_sets = 0

  # Iterate through each robot
  for i in range(N):
    x_i, d_i = robots[i]

    # If the current robot is already active, skip it
    if active_robots[i]:
      continue

    # Activate the current robot and increment the count of remaining sets
    active_robots[i] = True
    remaining_sets += 1

    # Find all the robots that are activated by the current robot
    for j in range(i+1, N):
      x_j, d_j = robots[j]

      # If the current robot is within the range of the activated robot, activate it
      if x_j >= x_i and x_j < x_i + d_i and not active_robots[j]:
        active_robots[j] = True

  # Return the count of remaining sets modulo 998244353
  return remaining_sets % mod

# Read the input
N = int(input())
robots = []
for _ in range(N):
  X, D = map(int, input().split())
  robots.append((X, D))

# Compute and print the result
result = possible_sets_of_robots(N, robots)
print(result)