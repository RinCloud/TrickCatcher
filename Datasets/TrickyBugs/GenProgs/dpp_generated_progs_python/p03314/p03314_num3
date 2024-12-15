MOD = 10**9 + 7

def count_colorful_sequences(N, K, M, A):
    # Create a dictionary to store the counts of each integer in A
    count = {i: 0 for i in range(1, K+1)}
    for i in A:
        count[i] += 1

    # Initialize the answer to 0
    ans = 0

    # Iterate over all possible subsequences of length N
    for i in range(N - M + 1):
        # Check if this subsequence is colorful
        if all(count[j] > 0 for j in range(1, K+1)):
            # Increment the answer by the number of times this subsequence appears in A
            ans += 1
            ans %= MOD

        # Update the counts by removing the first element of the subsequence and adding the next element
        count[A[i]] -= 1
        if i + M < N:
            count[A[i + M]] += 1

    # Print the final answer modulo MOD
    return ans % MOD


# Read the input
N, K, M = map(int, input().split())
A = list(map(int, input().split()))

# Call the function and print the result
print(count_colorful_sequences(N, K, M, A))