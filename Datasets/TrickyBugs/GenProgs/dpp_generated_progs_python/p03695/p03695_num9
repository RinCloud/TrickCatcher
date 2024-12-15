import sys

def main():
    # Read N from input
    N = int(sys.stdin.readline().strip())
    
    # Read ratings from input
    ratings = list(map(int, sys.stdin.readline().strip().split()))
    
    # Initialize color count dictionary
    color_count = {
        "gray": 0,
        "brown": 0,
        "green": 0,
        "cyan": 0,
        "blue": 0,
        "yellow": 0,
        "orange": 0,
        "red": 0,
        "other": 0
    }
    
    # Iterate over ratings
    for rating in ratings:
        # Increment count based on rating range
        if rating < 400:
            color_count["gray"] += 1
        elif rating < 800:
            color_count["brown"] += 1
        elif rating < 1200:
            color_count["green"] += 1
        elif rating < 1600:
            color_count["cyan"] += 1
        elif rating < 2000:
            color_count["blue"] += 1
        elif rating < 2400:
            color_count["yellow"] += 1
        elif rating < 2800:
            color_count["orange"] += 1
        elif rating < 3200:
            color_count["red"] += 1
        else:
            color_count["other"] += 1
    
    # Count the number of colors with at least one participant
    min_colors = sum(count > 0 for count in color_count.values() if count != 0)
    
    # Calculate the maximum number of colors
    max_colors = min_colors + color_count["other"]
    
    # Print the minimum and maximum number of colors
    print(min_colors, max_colors)


if __name__ == "__main__":
    main()