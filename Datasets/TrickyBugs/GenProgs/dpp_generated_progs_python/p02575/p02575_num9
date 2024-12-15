from sys import stdin

def min_moves_to_reach_next_row(H, W, blocked_squares):
    min_moves = [-1] * W
    min_moves[0] = 0
    
    for i in range(1, H+1):
        cant_move_down = set(blocked_squares[i-1])
        for j in range(W):
            if j not in cant_move_down:
                min_moves[j] = min(min_moves[j], min_moves[j-1] + 1) if j > 0 else 0
            else:
                min_moves[j] = -1
    
    return min_moves

H, W = map(int, stdin.readline().split())
blocked_squares = []
for _ in range(H):
    A, B = map(int, stdin.readline().split())
    blocked_squares.append(range(A-1, B))

min_moves = min_moves_to_reach_next_row(H, W, blocked_squares)
for i in range(H):
    print(min_moves[i])