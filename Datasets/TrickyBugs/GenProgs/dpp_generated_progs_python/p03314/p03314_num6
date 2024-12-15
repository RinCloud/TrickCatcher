MOD = int(1e9 + 7)

def count_colorful_sequences(N, K, M, A):
    # Count the frequency of each element in A
    freq = [0] * (K + 1)
    for num in A:
        freq[num] += 1
    
    # Initialize the answer
    ans = 0

    # Iterate through all possible starts of subsequence
    for start in range(N - M + 1):
        # Initialize a temporary frequency array for current subsequence
        temp_freq = freq.copy()

        # Iterate through the current subsequence
        for i in range(M):
            # Update the frequency of each element in the temporary array
            num = A[i]
            temp_freq[num] -= 1
            if temp_freq[num] == 0:
                temp_freq[num] = -1

        # Check if the temporary frequency array is colorful
        is_colorful = True
        for count in temp_freq[1:]:
            if count > 0:
                is_colorful = False
                break
        
        # If the temporary array is colorful, increment the answer
        if is_colorful:
            ans += 1

    # Return the final answer modulo MOD
    return ans % MOD

# Read the input
N, K, M = map(int, input().split())
A = list(map(int, input().split()))

# Calculate and print the result
result = count_colorful_sequences(N, K, M, A)
print(result)