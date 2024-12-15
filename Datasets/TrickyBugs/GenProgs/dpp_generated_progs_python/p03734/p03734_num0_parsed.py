def find_maximum_value(n, w, items):
    dp = [[0] * (w + 1) for _ in range(n + 1)]
    
    for i in range(1, n + 1):
        for j in range(1, w + 1):
            weight, value = items[i - 1]
            if weight <= j:
                dp[i][j] = max(value + dp[i - 1][j - weight], dp[i - 1][j])
            else:
                dp[i][j] = dp[i - 1][j]
    
    return dp[n][w]

n, w = map(int, input().split())
items = []
for _ in range(n):
    weight, value = map(int, input().split())
    items.append((weight, value))

print(find_maximum_value(n, w, items))