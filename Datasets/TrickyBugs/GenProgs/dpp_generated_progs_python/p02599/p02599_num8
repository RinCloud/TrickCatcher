# Program

from collections import defaultdict

# read inputs
N, Q = map(int, input().split())
colors = list(map(int, input().split()))

# store the count of each color
color_count = defaultdict(int)
for color in colors:
    color_count[color] += 1

# for each query, find the number of different colors in the given range
for _ in range(Q):
    l, r = map(int, input().split())
    
    # calculate the number of different colors in the range [l, r]
    diff_colors = len(set(colors[l-1:r]))
    
    print(diff_colors)