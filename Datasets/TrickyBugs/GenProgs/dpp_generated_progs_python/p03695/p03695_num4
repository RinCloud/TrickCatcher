import sys

# Read input from STDIN
input_data = sys.stdin.readlines()

# Parse input
N = int(input_data[0])
ratings = list(map(int, input_data[1].split()))

# Define colors
colors = {
    "gray": 0,
    "brown": 0,
    "green": 0,
    "cyan": 0,
    "blue": 0,
    "yellow": 0,
    "orange": 0,
    "red": 0,
}

# Count number of users in each color range
for rating in ratings:
    if rating < 400:
        colors["gray"] += 1
    elif rating < 800:
        colors["brown"] += 1
    elif rating < 1200:
        colors["green"] += 1
    elif rating < 1600:
        colors["cyan"] += 1
    elif rating < 2000:
        colors["blue"] += 1
    elif rating < 2400:
        colors["yellow"] += 1
    elif rating < 2800:
        colors["orange"] += 1
    elif rating < 3200:
        colors["red"] += 1
    else:
        colors["red"] += 1

# Count number of colors with at least one user
min_colors = sum([1 for count in colors.values() if count > 0])

# Count number of colors with at least one user, plus number of remaining users
max_colors = min_colors + sum([1 for rating in ratings if rating >= 3200])

# Print the result
print(min_colors, max_colors)