from itertools import permutations

def is_valid(pairs, matrix):
    for i, j in pairs:
        if matrix[i][j] != 1 or matrix[j][i] != 1:
            return False
    return True

def count_ways(N, A):
    # Convert input string to boolean matrix
    matrix = [[bool(int(A[i][j])) for j in range(2*N)] for i in range(2*N)]
    
    # Generate all possible pairs of 2N points and check validity
    all_pairs = list(permutations(range(2*N), 2*N))
    valid_pairs = []
    
    for pairs in all_pairs:
        if is_valid(pairs, matrix):
            valid_pairs.append(pairs)
            
    # Count the number of valid ways to divide the 2N points into N pairs
    count = 0
    
    for pairs in valid_pairs:
        visited = set()
        components = 0
        
        for i in range(2*N):
            if i not in visited:
                stack = [i]
                components += 1
                
                while stack:
                    node = stack.pop()
                    visited.add(node)
                        
                    for j in range(2*N):
                        if j not in visited and (node, j) in pairs:
                            stack.append(j)
                            
        if components == N:
            count += 1
            
    return count


# Read input
N = int(input())
A = [input() for _ in range(2*N)]

# Count the number of ways to divide the 2N points into N pairs
result = count_ways(N, A)

# Print the result
print(result)