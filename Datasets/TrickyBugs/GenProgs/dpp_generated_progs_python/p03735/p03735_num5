from typing import List, Tuple

def minimum_value(N: int, bags: List[Tuple[int, int]]) -> int:
    red_balls = []
    blue_balls = []
    for x, y in bags:
        red_balls.append(x)
        blue_balls.append(y)
    
    red_balls.sort()
    blue_balls.sort()
    
    R_max = red_balls[N-1]
    R_min = red_balls[0]
    B_max = blue_balls[N-1]
    B_min = blue_balls[0]
    
    return (R_max - R_min) * (B_max - B_min)

N = int(input())
bags = []
for _ in range(N):
    x, y = map(int, input().split())
    bags.append((x, y))

minimum_val = minimum_value(N, bags)
print(minimum_val)