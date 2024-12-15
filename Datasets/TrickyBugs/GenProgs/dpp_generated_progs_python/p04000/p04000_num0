H, W, N = map(int, input().split())

grid = [[0] * W for _ in range(H)]

for _ in range(N):
    a, b = map(int, input().split())
    grid[a-1][b-1] = 1

num_of_subrectangles = [0] * 10

for i in range(H-2):
    for j in range(W-2):
        count = 0
        for k in range(i, i+3):
            for l in range(j, j+3):
                if grid[k][l] == 1:
                    count += 1
        num_of_subrectangles[count] += 1

for count in num_of_subrectangles:
    print(count)