"""
Approach:
1. Find the count of -1's in the given sequence.
2. Calculate the total number of permutations for those -1's using the formula: pow(2N, count_of(-1)), where pow represents exponentiation.
3. Initialize a list, values, with 2N + 1 elements, where the value at each index represents the count of occurrences of that value in the given sequence.
4. Iterate through the given sequence:
    - If the current element is not -1, increment the count at the index corresponding to that element in the values list.
5. Initialize dp array with size N + 1, where dp[i] represents the number of different sequences for i elements.
6. Initialize dp[0] as 1, since an empty sequence has only one permutation.
7. For each index i in the dp array, calculate dp[i] using the formula:
    - dp[i] = (dp[i-1] * (2 * i - values[i])) % (10^9 + 7)
8. Print the value at index N in the dp array, which represents the number of different sequences for N elements, modulo (10^9 + 7).

"""

MOD = int(1e9 + 7)

def calculate_sequences(N, A):
    count_of_minus_ones = A.count(-1)
    total_permutations = pow(2*N, count_of_minus_ones, MOD)
    
    values = [0] * (2*N + 1)
    for a in A:
        if a != -1:
            values[a] += 1
    
    dp = [0] * (N + 1)
    dp[0] = 1
    for i in range(1, N + 1):
        dp[i] = (dp[i-1] * (2 * i - values[i])) % MOD
    
    return dp[N]

N = int(input())
A = list(map(int, input().split()))
print(calculate_sequences(N, A))
