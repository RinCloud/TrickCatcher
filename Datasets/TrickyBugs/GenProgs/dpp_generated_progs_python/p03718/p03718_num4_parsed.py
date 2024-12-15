def remove_leaves(H, W, pond):
    s_row, s_col = None, None
    t_row, t_col = None, None
    
    for i in range(H):
        for j in range(W):
            if pond[i][j] == 'S':
                s_row, s_col = i, j
            elif pond[i][j] == 'T':
                t_row, t_col = i, j

    if s_row is None or s_col is None or t_row is None or t_col is None:
        # Invalid input, S or T is missing
        return -1
    
    if (s_row == t_row) or (s_col == t_col):
        # Frog can jump directly from S to T
        return 0
    
    row_leaves = set()
    col_leaves = set()
    
    for i in range(H):
        for j in range(W):
            if pond[i][j] == 'o':
                row_leaves.add(i)
                col_leaves.add(j)
    
    if len(row_leaves) <= 1 and len(col_leaves) <= 1:
        # Frog cannot jump from S to T, even after removing all leaves except S and T
        return -1
    
    required_leaves = 0
    
    if s_row not in row_leaves and t_row not in row_leaves:
        required_leaves += 1
    
    if s_col not in col_leaves and t_col not in col_leaves:
        required_leaves += 1
    
    return required_leaves


# Read input
H, W = map(int, input().split())
pond = []
for _ in range(H):
    row = input()
    pond.append(row)

# Compute and print output
result = remove_leaves(H, W, pond)
print(result)
