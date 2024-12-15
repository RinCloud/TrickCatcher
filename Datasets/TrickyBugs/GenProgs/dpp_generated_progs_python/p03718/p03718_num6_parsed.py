H, W = map(int, input().split())
pond = [list(input()) for _ in range(H)]

S_r, S_c = -1, -1
T_r, T_c = -1, -1

for r in range(H):
    for c in range(W):
        if pond[r][c] == 'S':
            S_r, S_c = r, c
        elif pond[r][c] == 'T':
            T_r, T_c = r, c

if S_r == -1 or T_r == -1:
    print(-1)
else:
    reachable_from_S = set()

    # Check rows
    for c in range(W):
        if pond[S_r][c] == 'o' or pond[S_r][c] == 'T':
            reachable_from_S.add((S_r, c))

    # Check columns
    for r in range(H):
        if pond[r][S_c] == 'o' or pond[r][S_c] == 'T':
            reachable_from_S.add((r, S_c))
    
    if (T_r, T_c) in reachable_from_S:
        print(0)
    else:
        removable_leaves = 0
        while True:
            new_leaves = set()

            for r, c in reachable_from_S:
                # Check rows
                for c2 in range(W):
                    if pond[r][c2] == 'o' and (r, c2) not in reachable_from_S:
                        new_leaves.add((r, c2))
                
                # Check columns
                for r2 in range(H):
                    if pond[r2][c] == 'o' and (r2, c) not in reachable_from_S:
                        new_leaves.add((r2, c))
            
            if not new_leaves:
                break
            
            removable_leaves += 1
            reachable_from_S.update(new_leaves)
            
        if (T_r, T_c) in reachable_from_S:
            print(removable_leaves)
        else:
            print(-1)
