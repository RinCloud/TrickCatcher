def euclidean_remainder(x, m):
    return x % m

def find_sequence_sum(N, X, M):
    A = [X]
    for i in range(1, N):
        A.append(euclidean_remainder((A[i-1]**2), M))
    
    return sum(A)

# Read input
N, X, M = map(int, input().split())

# Calculate and print the sum of the sequence
print(find_sequence_sum(N, X, M))
