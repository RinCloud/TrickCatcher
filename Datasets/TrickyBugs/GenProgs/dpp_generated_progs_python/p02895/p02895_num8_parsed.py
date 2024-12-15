def count_pairs(N, A):
    # Calculate the number of ways to divide the 2N points into N pairs
    
    # Initialize the adjacency matrix
    adj_matrix = [[0] * (2*N) for _ in range(2*N)]
    
    # Populate the adjacency matrix based on the input matrix A
    for i in range(2*N):
        for j in range(2*N):
            adj_matrix[i][j] = int(A[i][j])
    
    # Initialize the number of ways to divide the points
    num_divisions = 0
    
    # Generate all possible pairings using backtracking
    def backtrack(pairings, used):
        nonlocal num_divisions
        
        # Base case: all points have been paired
        if len(pairings) == 2*N:
            num_divisions += 1
            return
        
        # Find the index of the next unpaired point
        for i in range(2*N):
            if not used[i]:
                break
        
        # Try pairing the next unpaired point with other unpaired points
        for j in range(i+1, 2*N):
            if not used[j]:
                # Check if the pairing satisfies the conditions
                if adj_matrix[i][j] and adj_matrix[j][i]:
                    # Update the pairings and used arrays
                    used[i] = used[j] = True
                    pairings[i] = pairings[j] = True
                    
                    # Backtrack to find the next pairing
                    backtrack(pairings, used)
                    
                    # Undo the changes for backtracking
                    used[i] = used[j] = False
                    pairings[i] = pairings[j] = False
    
    pairings = [False] * (2*N)
    used = [False] * (2*N)
    backtrack(pairings, used)
    
    return num_divisions


# Driver code
N = int(input())
A = [input() for _ in range(2*N)]
result = count_pairs(N, A)
print(result)