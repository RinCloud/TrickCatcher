# Function to calculate remainder of x divided by m
def f(x, m):
    return x % m

# Function to find the sum of A_i
def find_sum(N, X, M):
    A = [X]  # Initialize the sequence with A_1 = X
    sum = X  # Initialize the sum with X
    
    for i in range(1, N):
        A_next = f(A[i-1]**2, M)  # Calculate the next value in the sequence
        A.append(A_next)  # Append it to the sequence
        sum += A_next  # Add it to the sum
    
    return sum

# Read the input
N, X, M = map(int, input().split())

# Find and print the sum of A_i
print(find_sum(N, X, M))