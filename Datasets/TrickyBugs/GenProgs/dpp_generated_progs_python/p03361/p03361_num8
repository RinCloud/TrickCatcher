import sys

# Read input
H, W = map(int, input().split())
S = []
for _ in range(H):
    row = input().strip()
    S.append(row)

# Function to check if two adjacent squares can be painted black
def can_paint_black(i, j):
    if i-1 >= 0 and S[i-1][j] == '#':
        return True
    if i+1 < H and S[i+1][j] == '#':
        return True
    if j-1 >= 0 and S[i][j-1] == '#':
        return True
    if j+1 < W and S[i][j+1] == '#':
        return True
    return False

# Check if objective can be achieved
for i in range(H):
    for j in range(W):
        if S[i][j] == '#':
            if not can_paint_black(i, j):
                print("No")
                sys.exit()

# Print result
print("Yes")