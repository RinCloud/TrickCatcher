"""
def remove_leaves(H, W, pond):
    S = []
    T = []
    leaves = 0
    
    for i in range(H):
        for j in range(W):
            if pond[i][j] == 'S':
                S = [i, j]
            elif pond[i][j] == 'T':
                T = [i, j]
            elif pond[i][j] == 'o':
                leaves += 1
    
    if (S[0] == T[0]) or (S[1] == T[1]):
        if S[0] == T[0]:
            row = S[0]
            col_min = min(S[1], T[1])
            col_max = max(S[1], T[1])
            
            for i in range(col_min+1, col_max):
                if pond[row][i] == 'o':
                    leaves -= 1
                    
        if S[1] == T[1]:
            col = S[1]
            row_min = min(S[0], T[0])
            row_max = max(S[0], T[0])
            
            for i in range(row_min+1, row_max):
                if pond[i][col] == 'o':
                    leaves -= 1
                
        return leaves
        
    else:
        return -1

# Taking input
H, W = map(int, input().split())
pond = []
for _ in range(H):
    pond.append(list(input()))

print(remove_leaves(H, W, pond))
"""