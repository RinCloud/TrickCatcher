import sys


def main():
    # Read input
    n, a, b = map(int, sys.stdin.readline().split())
    coordinates = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

    # Initialize count
    count = 0

    # Iterate through all pairs of pinholes
    for i in range(n):
        for j in range(i + 1, n):
            # Check if the Manhattan distance is the same as the distance between the initial pinholes
            if abs(coordinates[i][0] - coordinates[j][0]) + abs(coordinates[i][1] - coordinates[j][1]) == abs(
                    coordinates[a - 1][0] - coordinates[b - 1][0]) + abs(coordinates[a - 1][1] - coordinates[b - 1][1]):
                count += 1

    # Print the number of pairs of pinholes that can be pointed by the compass
    print(count)


if __name__ == '__main__':
    main()