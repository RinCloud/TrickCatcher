import sys

def max_distance(N, coordinates):
    max_dist = 0
    for i in range(N):
        for j in range(i+1, N):
            dist = max(abs(coordinates[i][0]-coordinates[j][0]), abs(coordinates[i][1]-coordinates[j][1]))
            max_dist = max(max_dist, dist)
    return max_dist

if __name__ == "__main__":
    N = int(sys.stdin.readline().strip())
    coordinates = []
    for _ in range(N):
        x, y = map(int, sys.stdin.readline().strip().split())
        coordinates.append((x, y))
    print(max_distance(N, coordinates))