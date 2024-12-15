import math

def count_directed_graphs(N, K, P):
    # Calculate the factorial of N modulo P
    factorial_N = math.factorial(N) % P
    
    # Calculate the number of graphs that satisfy the conditions
    count = 1
    for i in range(N - K, N):
        count *= i
        count %= P
    
    # Calculate the final result using the factorial and count
    result = factorial_N // count
    
    # Return the result modulo P
    return result % P


# Read input from standard input
N, K, P = map(int, input().split())

# Calculate and print the number of directed graphs that satisfy the conditions, modulo P
print(count_directed_graphs(N, K, P))