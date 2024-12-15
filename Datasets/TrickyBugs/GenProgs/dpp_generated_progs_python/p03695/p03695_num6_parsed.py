# Program to find the minimum and maximum possible numbers of different colors of users in AtCoder

# function to determine the color based on the rating
def get_color(rating):
    if rating < 400:
        return "gray"
    elif rating < 800:
        return "brown"
    elif rating < 1200:
        return "green"
    elif rating < 1600:
        return "cyan"
    elif rating < 2000:
        return "blue"
    elif rating < 2400:
        return "yellow"
    elif rating < 2800:
        return "orange"
    elif rating < 3200:
        return "red"
    else:
        return "free"

# number of users
N = int(input())

# ratings of users
ratings = list(map(int, input().split()))

# list to store colors
colors = []

# iterate over the ratings and determine the color
for rating in ratings:
    color = get_color(rating)
    colors.append(color)

# get unique colors
unique_colors = list(set(colors))

# calculate minimum and maximum possible numbers of different colors
min_colors = max(1, len(unique_colors) - colors.count("free"))
max_colors = len(unique_colors)

# print the results
print(min_colors, max_colors)