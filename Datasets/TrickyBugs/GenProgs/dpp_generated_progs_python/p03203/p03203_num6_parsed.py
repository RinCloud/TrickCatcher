# Program

def takahashi_actions(H, W, N, obstacles):
    min_x = min(obstacles)[0]
    min_y = min(obstacles, key=lambda x: x[1])[1]
    return max(min_x-1, min_y-1)

# Read input
H, W, N = map(int, input().split())
obstacles = []
for _ in range(N):
    obstacles.append(tuple(map(int, input().split())))

# Call function and print result
print(takahashi_actions(H, W, N, obstacles))