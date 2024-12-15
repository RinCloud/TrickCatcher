def min_tiles_repainted(S):
    num_repainted = 0
    for i in range(1, len(S)):
        if S[i] == S[i-1]:
            num_repainted += 1
    return num_repainted

S = input().strip()
min_repainted = min_tiles_repainted(S)
print(min_repainted)