import sys

def main():
    # Read inputs
    n = int(sys.stdin.readline())
    ratings = list(map(int, sys.stdin.readline().split()))
    
    # Initialize color count for each rating range
    colors = [0] * 9
    
    # Count the number of users in each rating range
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
            colors[8] += 1
    
    # Count the number of different colors
    min_colors = sum(colors[:8])
    max_colors = sum(colors[:8]) + (colors[8] > 0)
    
    # Print the results
    print(min_colors, max_colors)

if __name__ == "__main__":
    main()