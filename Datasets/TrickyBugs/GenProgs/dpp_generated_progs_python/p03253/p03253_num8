import sys


MOD = 10**9 + 7


def count_sequences(N, M):
    # Initialize a list to store the count of sequences for each position
    count = [1] * N

    # Iterate from position 2 to N
    for i in range(2, N + 1):
        # Check if i is a factor of M
        if M % i == 0:
            # Initialize a dictionary to store unique factors and their counts
            factors = {}
            # Initialize a variable to store the remaining value after dividing by i
            remaining = M

            # Divide remaining by i until it is no longer divisible
            while remaining % i == 0:
                # Update the factors dictionary
                factors[i] = factors.get(i, 0) + 1
                # Update the remaining value
                remaining //= i

            # Iterate through the previous positions
            for j in range(i - 1):
                # Multiply the count for each position by the count of factors
                count[j] *= len(factors)
                count[j] %= MOD
    
    # Multiply the count for the last position by the count of factors
    count[-1] *= len(factors)
    count[-1] %= MOD

    # Calculate the total count of sequences modulo MOD
    total_count = sum(count) % MOD

    return total_count


if __name__ == "__main__":
    # Read the input N and M from STDIN
    N, M = map(int, sys.stdin.readline().split())

    # Calculate the count of sequences
    result = count_sequences(N, M)

    # Print the result
    print(result)