'''
Let's solve this problem step by step.

First, we initialize an array `dp` of length N+1 with all zeros. This array will store the number of different strings that x can be after performing operations.

Next, we iterate over each length starting from A to N (inclusive). For each length `len`, we calculate the number of different strings that x can be after performing operations by using dynamic programming.

For each `len`, suppose `left` is the starting index and `right` is the ending index of the substring of length `len`. We have two options:
1. Replace this substring with all zeros.
2. Replace this substring with all ones.

If we choose option 1, then the number of different strings that x can be after performing operations would be the same as the number of different strings that x can be after performing operations on the remaining string (i.e., after the ending index of the substring).
So, the number of different strings in this case would be dp[right+1].
Note that dp[right+1] represents the number of different strings that x can be after performing operations on the remaining string.
We need to consider all possible `right` values such that `right+len` is less than or equal to N.

If we choose option 2, then the number of different strings that x can be after performing operations would be the same as the number of different strings that x can be after performing operations on the remaining string (i.e., after the ending index of the substring) multiplied by 2^(N - (right+len)) modulo (10^9+7).
So, the number of different strings in this case would be (dp[right+1] * pow(2, N - (right+len), MOD)) % MOD.
Note that dp[right+1] represents the number of different strings that x can be after performing operations on the remaining string.
We need to consider all possible `right` values such that `right+len` is less than or equal to N.

Finally, we update the value of dp[left] by adding the counts obtained from both options.
dp[left] = (dp[left] + dp[right+1] + (dp[right+1] * pow(2, N - (right+len), MOD)) % MOD) % MOD.

After the loop ends, the answer will be stored in dp[0], which represents the number of different strings that x can be after performing operations on the full string.

Let's write the code to implement this solution:
'''

MOD = int(1e9) + 7

def count_strings(N, A, B):
    dp = [0] * (N+1)
    
    for len in range(A, N+1):
        for left in range(N-len+1):
            right = left + len - 1
            
            # Option 1: Replace substring with all zeros
            dp[left] = (dp[left] + dp[right+1]) % MOD
            
            # Option 2: Replace substring with all ones
            dp[left] = (dp[left] + (dp[right+1] * pow(2, N - (right+len), MOD)) % MOD) % MOD
    
    return dp[0]

# Read input from stdin
N, A, B = map(int, input().split())

# Calculate and print the result
result = count_strings(N, A, B)
print(result)