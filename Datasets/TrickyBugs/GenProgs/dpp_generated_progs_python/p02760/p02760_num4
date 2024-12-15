board = []
for _ in range(3):
    row = list(map(int, input().split()))
    board.append(row)
    
n = int(input())

chosen = set()
for _ in range(n):
    chosen.add(int(input()))
    
# Check rows
for i in range(3):
    if all(board[i][j] in chosen for j in range(3)):
        print('Yes')
        exit()

# Check columns
for j in range(3):
    if all(board[i][j] in chosen for i in range(3)):
        print('Yes')
        exit()
        
# Check diagonal
if board[0][0] in chosen and board[1][1] in chosen and board[2][2] in chosen:
    print('Yes')
    exit()
if board[0][2] in chosen and board[1][1] in chosen and board[2][0] in chosen:
    print('Yes')
    exit()

print('No')