import math

def count_permutations(N, K):
    mod = 924844033

    # Store the final count of valid permutations
    count = 0

    # Calculate the factorial of N
    factorial_N = math.factorial(N)

    # Iterate over all possible permutations of length N
    for i in range(factorial_N):
        # Generate the current permutation
        permutation = [j + 1 for j in range(N)]
        
        # Check if the current permutation satisfies the condition
        valid = True
        for j in range(N):
            if abs(permutation[j] - (j + 1)) == K:
                valid = False
                break
        
        # If the permutation satisfies the condition, increment the count
        if valid:
            count += 1

    # Return the answer modulo 924844033
    return count % mod

# Read input values
N, K = map(int, input().split())

# Calculate and print the count of valid permutations
print(count_permutations(N, K))