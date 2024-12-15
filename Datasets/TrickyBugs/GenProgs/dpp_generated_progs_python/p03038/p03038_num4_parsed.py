# Reading input from standard input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Initializing sum to be 0
sum = 0

# Iterating through M operations
for i in range(M):
    B, C = map(int, input().split())
  
    # Sorting array A in descending order
    A.sort(reverse=True)
  
    # Updating values of A based on current operation
    for j in range(B):
        if A[j] < C:
            A[j] = C
        else:
            # No cards left with smaller A values
            break
    
    # Calculating sum of updated A values
    sum = sum(A)

# Printing the maximum possible sum
print(sum)