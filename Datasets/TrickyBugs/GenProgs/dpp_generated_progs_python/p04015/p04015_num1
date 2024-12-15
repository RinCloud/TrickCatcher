def count_selections(n, a, nums):
    dp = [[0] * (a * n + 1) for _ in range(n + 1)]
    dp[0][0] = 1
    
    for i in range(1, n + 1):
        for j in range(i, 0, -1):
            for k in range(nums[i - 1], a * i + 1):
                dp[j][k] += dp[j - 1][k - nums[i - 1]]
    
    count = 0
    for i in range(1, n + 1):
        count += dp[i][a * i]
    
    return count

# Read input values
n, a = map(int, input().split())
nums = list(map(int, input().split()))

# Call the function and print the result
print(count_selections(n, a, nums))