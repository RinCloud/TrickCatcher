N, K = map(int, input().split())

board = [[0] * (2*K) for _ in range(2*K)]

for _ in range(N):
    x, y, c = input().split()
    x = int(x)
    y = int(y)
    if c == 'B':
        board[x%(2*K)][y%(2*K)] += 1
        board[(x+K)%(2*K)][(y+K)%(2*K)] += 1
    else:
        board[(x+K)%(2*K)][y%(2*K)] += 1
        board[x%(2*K)][(y+K)%(2*K)] += 1

ans = 0

for i in range(K):
    for j in range(K):
        ans = max(ans, board[i][j])

print(ans)