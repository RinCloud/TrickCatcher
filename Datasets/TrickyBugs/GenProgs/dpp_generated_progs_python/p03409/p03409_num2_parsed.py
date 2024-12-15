import sys

def max_friendly_pairs(N, red_points, blue_points):
    max_pairs = 0
    for red_point in red_points:
        pairs = 0
        for blue_point in blue_points:
            if red_point[0] < blue_point[0] and red_point[1] < blue_point[1]:
                pairs += 1
        max_pairs = max(max_pairs, pairs)
    return max_pairs

if __name__ == "__main__":
    N = int(input())
    red_points = []
    blue_points = []
    for _ in range(N):
        a, b = map(int, input().split())
        red_points.append((a, b))
    for _ in range(N):
        c, d = map(int, input().split())
        blue_points.append((c, d))
    result = max_friendly_pairs(N, red_points, blue_points)
    print(result)