# Euclidean Division Remainder Sum

def euclidean_remainder_sum(N, X, M):
    # Initialize the sequence A with the initial value X
    A = [X]
    # Calculate A_i for i = 2 to N
    for i in range(1, N):
        A_i = (A[i-1] ** 2) % M
        # If A_i repeats a previous value, break the loop
        if A_i in A:
            break
        A.append(A_i)
    
    # Calculate the sum of the sequence A
    sum_A = sum(A)
    
    # If the sequence A repeats before reaching N, find the pattern
    if len(A) < N:
        pattern_start = A.index(A_i)
        pattern_length = len(A) - pattern_start
        pattern_sum = sum(A[pattern_start:])
        # Calculate the remaining part of the sum after the pattern
        remaining_sum = pattern_sum * ((N - pattern_start) // pattern_length)
        remainder = (N - pattern_start) % pattern_length
        sum_A += remaining_sum + sum(A[pattern_start:pattern_start + remainder])
    
    return sum_A

# Read the input from the standard input
N, X, M = map(int, input().split())

# Find the sum of the sequence A
sum_A = euclidean_remainder_sum(N, X, M)

# Print the sum of the sequence A
print(sum_A)