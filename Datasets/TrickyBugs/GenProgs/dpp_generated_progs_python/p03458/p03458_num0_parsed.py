# Program

def maximum_satisfied_desires(N, K, desires):
    black_count = [[0] * (K * 2) for _ in range(K * 2)]
    white_count = [[0] * (K * 2) for _ in range(K * 2)]
    
    for x, y, c in desires:
        x_mod = x % (K * 2)
        y_mod = y % (K * 2)
        
        if c == 'B':
            black_count[x_mod][y_mod] += 1
            black_count[x_mod][y_mod + K * 2] -= 1
            black_count[x_mod + K * 2][y_mod] -= 1
            black_count[x_mod + K * 2][y_mod + K * 2] += 1
        else:
            white_count[x_mod][y_mod] += 1
            white_count[x_mod][y_mod + K * 2] -= 1
            white_count[x_mod + K * 2][y_mod] -= 1
            white_count[x_mod + K * 2][y_mod + K * 2] += 1
    
    for i in range(K * 2):
        for j in range(1, K * 2):
            black_count[i][j] += black_count[i][j - 1]
            white_count[i][j] += white_count[i][j - 1]
    
    for i in range(1, K * 2):
        for j in range(K * 2):
            black_count[i][j] += black_count[i - 1][j]
            white_count[i][j] += white_count[i - 1][j]
    
    max_desires = 0
    
    for i in range(K):
        for j in range(K):
            total_black = 0
            total_white = 0
            for k in range(i, K * 2, K):
                for l in range(j, K * 2, K):
                    total_black += black_count[k][l]
                    total_white += white_count[k][l]
            max_desires = max(max_desires, total_black, total_white)
    
    return max_desires

# Get input values
N, K = map(int, input().split())
desires = []
for _ in range(N):
    x, y, c = input().split()
    desires.append((int(x), int(y), c))

# Get the maximum number of desires that can be satisfied at the same time
result = maximum_satisfied_desires(N, K, desires)

# Print the result
print(result)