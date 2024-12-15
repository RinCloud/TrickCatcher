def minimum_mp(H, W, c, A):
    # Floyd-Warshall algorithm to find minimum cost to change every digit to 1
    for k in range(10):
        for i in range(10):
            for j in range(10):
                c[i][j] = min(c[i][j], c[i][k] + c[k][j])
    
    total_mp = 0
    for i in range(H):
        for j in range(W):
            if A[i][j] != -1:
                total_mp += c[A[i][j]][1]
    
    return total_mp


# Read input
H, W = map(int, input().split())
c = [list(map(int, input().split())) for _ in range(10)]
A = [list(map(int, input().split())) for _ in range(H)]

# Call the function and print the result
print(minimum_mp(H, W, c, A))