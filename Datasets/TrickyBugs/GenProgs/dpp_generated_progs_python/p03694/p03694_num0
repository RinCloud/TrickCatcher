import sys

def main():
    # Read N
    N = int(sys.stdin.readline().strip())

    # Read the coordinates of the houses
    coordinates = list(map(int, sys.stdin.readline().split()))

    # Sort the coordinates in ascending order
    coordinates.sort()

    # Calculate the minimum distance between the first and last house
    minimum_distance = coordinates[N-1] - coordinates[0]

    # Print the minimum distance
    print(minimum_distance)

if __name__ == "__main__":
    main()