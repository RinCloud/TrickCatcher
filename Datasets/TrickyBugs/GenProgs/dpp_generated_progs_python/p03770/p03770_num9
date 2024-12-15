from collections import defaultdict

def solve(N, X, Y, balls):
    mod = 10**9 + 7
    
    color_counts = defaultdict(int)
    weight_counts = defaultdict(int)
    
    for c, w in balls:
        color_counts[c] += 1
        weight_counts[c] += w
    
    fact = [1] * (N+1)
    inv_fact = [1] * (N+1)
    
    for i in range(2, N+1):
        fact[i] = (fact[i-1] * i) % mod
        inv_fact[i] = (inv_fact[i-1] * pow(i, mod-2, mod)) % mod
    
    ans = fact[N]
    
    for num_balls in color_counts.values():
        ans *= inv_fact[num_balls]
        ans %= mod
    
    ans *= pow(2, len(weight_counts), mod) - 1
    ans %= mod
    
    dp = [0] * (X+1)
    dp[0] = 1
    
    for weight in weight_counts.values():
        for i in range(X, 0, -1):
            if i - weight >= 0:
                dp[i] += dp[i-weight]
                dp[i] %= mod
    
    for weight in dp:
        ans += weight
        ans %= mod
    
    return ans

def main():
    N, X, Y = map(int, input().split())
    balls = [list(map(int, input().split())) for _ in range(N)]
    
    ans = solve(N, X, Y, balls)
    print(ans)

if __name__ == "__main__":
    main()