def find_min_moves(N, M, X):
    X.sort()
    moves = 0
    
    for i in range(1, M):
        moves += abs(X[i] - X[i-1])
    
    return moves

# Read input
N, M = map(int, input().split())
X = list(map(int, input().split()))

# Call function and print result
result = find_min_moves(N, M, X)
print(result)