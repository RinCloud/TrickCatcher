N, X, M = map(int, input().split())

A = [X]  # Initialize the sequence A with the initial value X

sum_A = X  # Initialize the sum with X

for i in range(1, N):
    A_i_plus_1 = (A[i - 1]**2) % M  # Calculate the next term in the sequence using the recurrence relation
    sum_A += A_i_plus_1  # Add the next term to the sum
    A.append(A_i_plus_1)  # Add the next term to the sequence

print(sum_A)