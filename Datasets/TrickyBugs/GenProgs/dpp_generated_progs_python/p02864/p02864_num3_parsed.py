'''
# Approach: Dynamic Programming
# 1. We consider the first i columns, and try to calculate the minimum number of operations required for the first i columns.
# 2. Let dp[i][j] denote the minimum number of operations required for the first i columns, such that the i-th column has j bottommost painted squares.
# 3. We can iterate over the number of bottommost squares painted in the i-th column (from 0 to H[i]), and try to minimize the number of operations required.
# 4. For each possible value of H[i], we can calculate dp[i][j] by considering two cases:
#    a) If H[i] = j (current column has exactly j bottommost squares painted):
#       In this case, we don't need to consider any previous column, since the current column satisfies the modified plan.
#       So, dp[i][j] = dp[i-1][j]
#    b) If H[i] < j (current column has less than j bottommost squares painted):
#       In this case, we can choose a previous column (denoted by p) from the first (i-1) columns, such that:
#       * The number of bottommost squares painted in the p-th column is greater than or equal to j-H[i]. (j-H[i] squares from the current column are already satisfied by previous column).
#       * The number of bottommost squares painted in the p-th column is minimum among such previous columns. (To minimize the number of operations required)
#       Let's say dp[i-1][p] is the minimum number of operations required for the first (i-1) columns, such that the p-th column has at least (j-H[i]) bottommost painted squares.
#       In this case, dp[i][j] = dp[i-1][p] + (j-H[i])  (painting (j-H[i]) squares in current column, and adding the minimum operations required for the previous columns)
# 5. The final answer will be the minimum value of dp[N][j], where j varies from 0 to 10^9.

# Time complexity analysis:
# The time complexity of this approach is O(N * 10^9), which will be large for N=300. Therefore, we will need to optimize the solution further.
# We can observe that for any column, we only need to consider at most K previous columns to calculate the minimum number of operations required for that column.
# Therefore, we can optimize the solution by restricting the range of p to at most K columns.
# This will reduce the time complexity to O(N*K*10^9), which is efficient for the given constraints.
# The optimized solution is implemented below:


'''
def minimum_operations(N, K, H):
    INF = float('inf')
    dp = [[INF] * (10**9+1) for _ in range(N+1)]
    
    # Base case: 0 columns, 0 operations required
    dp[0][0] = 0
    
    for i in range(1, N+1):
        for j in range(K+1):
            for k in range(H[i-1]+1):
                if j+k <= K:
                    dp[i][j+k] = min(dp[i][j+k], dp[i-1][j] + max(0, k-H[i-1]))
    
    return min(dp[N])

# Read input
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Print result
print(minimum_operations(N, K, H))