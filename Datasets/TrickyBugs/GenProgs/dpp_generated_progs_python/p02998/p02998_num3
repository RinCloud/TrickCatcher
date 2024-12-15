from collections import defaultdict

def solve(N, points):
    count = defaultdict(int)
    for x, y in points:
        count[(x, y)] += 1
    
    ans = 0
    for i in range(N):
        for j in range(i+1, N):
            x1, y1 = points[i]
            x2, y2 = points[j]
            if (x1 + y1) % 2 == 0 and (x2 + y2) % 2 == 0:
                mx = (x1 + x2) // 2
                my = (y1 + y2) // 2
                if count[(mx, my)] > 0:
                    diff = count[(x1, y1)] + count[(x2, y2)] + count[(mx, my)] - 3
                    ans = max(ans, diff)
    return ans

# Read input
N = int(input())
points = [tuple(map(int, input().split())) for _ in range(N)]

# Solve the problem
ans = solve(N, points)

# Print the result
print(ans)