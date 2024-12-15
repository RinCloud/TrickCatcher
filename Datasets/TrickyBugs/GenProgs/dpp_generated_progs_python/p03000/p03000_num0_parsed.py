import sys

def main():
    # Read input from standard input
    input_lines = sys.stdin.readlines()
    n, x = map(int, input_lines[0].split())
    l = list(map(int, input_lines[1].split()))

    # Initialize total bounces to 1 (the first bounce at coordinate 0)
    total_bounces = 1

    # Iterate through each bounce
    for i in range(n):
        # Calculate the coordinate of the i-th bounce
        coordinate = total_bounces + l[i]

        # If the coordinate is at most X, increase the total bounces
        if coordinate <= x:
            total_bounces += 1

    # Print the number of times the ball will make a bounce where the coordinate is at most X
    print(total_bounces)


if __name__ == "__main__":
    main()