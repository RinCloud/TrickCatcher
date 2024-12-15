import sys

def main():
    # Read input
    n = int(input())
    ratings = list(map(int, input().split()))

    # Initialize color counts
    colors = [0] * 8
    other = 0

    # Count the number of different colors
    for rating in ratings:
        if rating < 400:
            colors[0] = 1
        elif rating < 800:
            colors[1] = 1
        elif rating < 1200:
            colors[2] = 1
        elif rating < 1600:
            colors[3] = 1
        elif rating < 2000:
            colors[4] = 1
        elif rating < 2400:
            colors[5] = 1
        elif rating < 2800:
            colors[6] = 1
        elif rating < 3200:
            colors[7] = 1
        else:
            other += 1

    # Count the minimum and maximum number of colors
    min_colors = sum(colors)
    max_colors = min_colors + other
    if min_colors == 0 and other > 0:
        min_colors = 1

    # Print the result
    print(min_colors, max_colors)


if __name__ == "__main__":
    main()