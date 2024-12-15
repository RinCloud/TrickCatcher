# Program:

import sys

def solve(N, values):
    values.sort()
    xmin = sys.maxsize
    xmax = -sys.maxsize
    ymin = sys.maxsize
    ymax = -sys.maxsize
    for i in range(N):
        xmin = min(xmin, values[i][0])
        xmax = max(xmax, values[i][0])
        ymin = min(ymin, values[i][1])
        ymax = max(ymax, values[i][1])
    return (xmax - xmin) * (ymax - ymin)

N = int(input())
values = []
for _ in range(N):
    x, y = map(int, input().split())
    values.append((x, y))
print(solve(N, values))