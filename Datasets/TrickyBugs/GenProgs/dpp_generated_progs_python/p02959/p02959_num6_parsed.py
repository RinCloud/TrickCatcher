def max_monsters(N, A, B):
    max_monsters = 0

    for i in range(N):
        max_monsters += min(A[i], B[i])
        A[i] -= min(A[i], B[i])
        B[i] -= min(A[i], B[i])
        
        max_monsters += min(A[i+1], B[i])
        A[i+1] -= min(A[i+1], B[i])
        B[i] -= min(A[i+1], B[i])

    return max_monsters

# Read input
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Calculate and print the maximum total number of monsters the heroes can defeat
print(max_monsters(N, A, B))