def euclidean_division(x, m):
    return x % m

def find_sequence_sum(N, X, M):
    A = [X]
    for i in range(1, N):
        A.append(euclidean_division(A[i-1]**2, M))

    return sum(A)

# Read input from standard input
N, X, M = map(int, input().split())

# Find sequence sum
sequence_sum = find_sequence_sum(N, X, M)

# Print output
print(sequence_sum)