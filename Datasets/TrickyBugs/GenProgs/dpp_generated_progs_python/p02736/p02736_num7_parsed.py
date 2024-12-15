def calculate_x(N, a):
    x = [[0] * (N+1-i) for i in range(1, N+1)]
    
    for j in range(N):
        x[0][j] = int(a[j])
    
    for i in range(1, N):
        for j in range(N+1-i):
            x[i][j] = abs(x[i-1][j] - x[i-1][j+1])
            
    return x[N-1][0]


# Read input
N = int(input())
a = input()

# Calculate x_N_1
result = calculate_x(N, a)

# Print result
print(result)