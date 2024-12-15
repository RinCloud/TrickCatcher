def count_sequences(N, K, s):
    MOD = 10**9 + 7

    # Create a 2D list to store the number of sequences
    # num_sequences[i][j] represents the number of sequences ending at position i with j red balls
    num_sequences = [[0] * (N + 1) for _ in range(K + 1)]
    
    # Initialize the base case: 1 sequence with 0 red balls at position 0
    num_sequences[0][0] = 1
    
    # Iterate through each operation
    for i in range(1, K + 1):
        # Count the number of red and blue balls in the current operation
        num_red = sum(1 for c in s[:i] if c == 'r')
        num_blue = i - num_red
        
        # Iterate through each position
        for j in range(N + 1):
            # Calculate the number of sequences ending at position j after the i-th operation
            num_sequences[i][j] = num_sequences[i - 1][j] * (N - j) + num_sequences[i - 1][j - 1] * j
            num_sequences[i][j] %= MOD
    
    # Return the number of sequences after all operations
    return num_sequences[K][N]


# Read input values
N, K = map(int, input().split())
s = input()

# Call the function and print the result
print(count_sequences(N, K, s))