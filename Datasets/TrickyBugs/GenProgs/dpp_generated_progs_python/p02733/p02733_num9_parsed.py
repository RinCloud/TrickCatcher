import itertools

def cut_chocolate(H, W, K, S):
    # Generate all possible horizontal cuts
    horizontal_cuts = []
    for i in range(H + 1):
        for j in range(i, H + 1):
            horizontal_cuts.append((i, j))
    
    # Generate all possible vertical cuts
    vertical_cuts = []
    for i in range(W + 1):
        for j in range(i, W + 1):
            vertical_cuts.append((i, j))
    
    min_cuts = float('inf')
    for horizontal_cut in horizontal_cuts:
        for vertical_cut in vertical_cuts:
            # Count the number of white squares in each block
            count = 0
            for i in range(horizontal_cut[0], horizontal_cut[1]):
                for j in range(vertical_cut[0], vertical_cut[1]):
                    if S[i][j] == '1':
                        count += 1
            # Check if all blocks satisfy the condition
            if count <= K:
                # Calculate the minimum number of cuts
                min_cuts = min(min_cuts, len(horizontal_cut) - 1 + len(vertical_cut) - 1)
    
    return min_cuts

# Read input values
H, W, K = map(int, input().split())
S = []
for _ in range(H):
    S.append(list(input()))
    
# Call the function and print the result
result = cut_chocolate(H, W, K, S)
print(result)