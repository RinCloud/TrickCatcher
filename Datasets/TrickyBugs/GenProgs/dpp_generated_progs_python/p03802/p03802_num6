import sys

def main():
    n = int(sys.stdin.readline().rstrip())

    coordinates = []
    for _ in range(n):
        x, y = map(int, sys.stdin.readline().rstrip().split())
        coordinates.append((x, y))

    max_distance = 0
    for i in range(n):
        for j in range(i+1, n):
            distance = max(abs(coordinates[i][0] - coordinates[j][0]), abs(coordinates[i][1] - coordinates[j][1]))
            max_distance = max(max_distance, distance)

    print(max_distance)


if __name__ == "__main__":
    main()