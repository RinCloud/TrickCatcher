def cut_chocolate_bar(H, W, K, S):
    num_cuts = 0
    current_block_count = 0
    
    for i in range(H):
        for j in range(W):
            if S[i][j] == '1':
                current_block_count += 1
            
            if current_block_count > K:
                num_cuts += 1
                current_block_count = 1
            elif current_block_count == K:
                current_block_count = 0
    
    return num_cuts

H, W, K = map(int, input().split())
S = [input() for _ in range(H)]

result = cut_chocolate_bar(H, W, K, S)
print(result)