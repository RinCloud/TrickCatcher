import math

def count_directed_graphs(N, K, P):
    # Find the factorial of N
    factorial = math.factorial(N)
    
    # Find the number of permutations of choosing K vertices from N vertices
    permutations = math.perm(N, K)
    
    # Calculate the number of possible edges in the directed graph
    edges = 0
    for k in range(1, K+1):
        edges += math.comb(K, k) * math.perm(K, k) * math.perm(N-K, k)
    
    # Calculate the number of directed graphs satisfying the conditions
    count = (factorial // (edges * permutations)) % P
    
    return count

# Read input from standard input
N, K, P = map(int, input().split())

# Calculate and print the number of directed graphs satisfying the conditions
print(count_directed_graphs(N, K, P))