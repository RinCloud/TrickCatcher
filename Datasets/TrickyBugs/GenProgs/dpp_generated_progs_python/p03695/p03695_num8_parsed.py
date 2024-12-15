# Taking input
n = int(input())
ratings = list(map(int, input().split()))

# Count the number of different colors of the users
colors = set()
for rating in ratings:
    if rating < 400:
        colors.add("gray")
    elif rating < 800:
        colors.add("brown")
    elif rating < 1200:
        colors.add("green")
    elif rating < 1600:
        colors.add("cyan")
    elif rating < 2000:
        colors.add("blue")
    elif rating < 2400:
        colors.add("yellow")
    elif rating < 2800:
        colors.add("orange")
    elif rating < 3200:
        colors.add("red")
    else:
        colors.add("free")

# Print the minimum and maximum possible numbers of different colors
min_colors = len(colors) if "free" not in colors else max(len(colors) - 1, 1)
max_colors = len(colors)

print(min_colors, max_colors)