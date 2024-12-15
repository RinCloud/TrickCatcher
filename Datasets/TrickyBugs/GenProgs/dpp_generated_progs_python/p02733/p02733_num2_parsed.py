import itertools

def count_cuts(H, W, K, S):
    ans = float('inf')
    
    # Try all possible horizontal cuts
    for cuts in itertools.combinations(range(1, H), K-1):
        blocks = []
        prev_cut = 0
        
        # Calculate the number of white squares in each block
        for cut in cuts:
            block = sum(S[i][j] == '1' for i in range(prev_cut, cut) for j in range(W))
            blocks.append(block)
            prev_cut = cut
            
        # Calculate the number of white squares in the last block
        last_block = sum(S[i][j] == '1' for i in range(prev_cut, H) for j in range(W))
        blocks.append(last_block)
        
        # Update the minimum number of cuts if necessary
        ans = min(ans, max(blocks))
    
    return ans

# Read input
H, W, K = map(int, input().split())
S = [input() for _ in range(H)]

# Count the minimum number of cuts
result = count_cuts(H, W, K, S)

# Print the result
print(result)