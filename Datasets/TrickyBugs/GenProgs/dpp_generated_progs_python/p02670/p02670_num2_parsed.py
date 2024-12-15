def count_hate_pairs(N, P):
    seats = [[0] * N for _ in range(N)]
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    hate_pairs = 0

    def valid(x, y):
        return 0 <= x < N and 0 <= y < N

    for p in P:
        p -= 1   # Adjust viewer number to 0-indexing
        x, y = p // N, p % N
        min_hate = float('inf')
        for k in range(4):
            nx, ny = x + dx[k], y + dy[k]
            if valid(nx, ny) and seats[nx][ny] != 0:
                # Calculate the minimum number of viewers that will hate the current viewer
                min_hate = min(min_hate, seats[nx][ny])
        seats[x][y] = min_hate + 1
        hate_pairs += min_hate

    return hate_pairs


# Read input
N = int(input())
P = list(map(int, input().split()))

# Compute and print the number of pairs of viewers
ans = count_hate_pairs(N, P)
print(ans)
