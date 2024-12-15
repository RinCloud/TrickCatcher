import sys
from itertools import permutations

def compute_min_value(N, balls):
    min_diff = float('inf')
    for p in permutations(balls):
        red_max = max(p[:N])
        red_min = min(p[:N])
        blue_max = max(p[N:])
        blue_min = min(p[N:])
        min_diff = min(min_diff, (red_max - red_min) * (blue_max - blue_min))
    return min_diff

def main():
    N = int(input())
    balls = []
    for _ in range(N):
        x, y = map(int, input().split())
        balls.append(x)
        balls.append(y)
    
    min_value = compute_min_value(N, balls)
    print(min_value)

if __name__ == "__main__":
    main()