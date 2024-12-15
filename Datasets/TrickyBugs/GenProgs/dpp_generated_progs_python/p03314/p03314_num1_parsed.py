MOD = 10**9 + 7

def count_colorful_sequences(N, K, M, A):
    # Initialize an array to store the frequencies of elements from A
    freq = [0] * (K+1)
    
    # Count the frequency of each element in A
    for a in A:
        freq[a] += 1
    
    # Initialize a sum variable
    total_count = 0
    
    # Iterate through all possible colorful sequences of length N
    for i in range(1, K+1):
        for j in range(1, K+1):
            # Count the number of contiguous subsequences of length N that coincide with A
            count = 0
            for k in range(1, K+1):
                if freq[k] > 0:
                    count += pow(N-K+1, freq[k], MOD) * pow(N-K+1-j, freq[k]-1, MOD)
                    count %= MOD
            
            # Add the count to the total sum
            total_count += count
            total_count %= MOD
    
    # Return the total sum modulo MOD
    return total_count

# Read the input values
N, K, M = map(int, input().split())
A = list(map(int, input().split()))

# Calculate the count of colorful sequences modulo MOD
result = count_colorful_sequences(N, K, M, A)

# Print the result
print(result)