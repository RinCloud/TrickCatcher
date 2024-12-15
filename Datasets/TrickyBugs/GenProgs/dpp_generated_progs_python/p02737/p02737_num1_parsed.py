def main():
    MOD = 998244353

    def pow_mod(x, n):
        res = 1
        while n > 0:
            if n & 1:
                res = res * x % MOD
            x = x * x % MOD
            n >>= 1
        return res

    N = int(input())
    M1 = int(input())
    X = [list(map(int, input().split())) for _ in range(M1)]
    M2 = int(input())
    Y = [list(map(int, input().split())) for _ in range(M2)]
    M3 = int(input())
    Z = [list(map(int, input().split())) for _ in range(M3)]

    inv_N = pow_mod(N * N * N, MOD - 2)
    ans = 0
    for a, b in X:
        ans += pow_mod(10, 18 * (N - 2)) * (pow_mod(10, 18 * (N - a)) - pow_mod(10, 18 * (N - b) - 1)) % MOD
        ans %= MOD
    for c, d in Y:
        ans += pow_mod(10, 18 * (N - 2)) * (pow_mod(10, 18 * (N - c)) - pow_mod(10, 18 * (N - d) - 1)) % MOD
        ans %= MOD
    for e, f in Z:
        ans += pow_mod(10, 18 * (N - 2)) * (pow_mod(10, 18 * (N - e)) - pow_mod(10, 18 * (N - f) - 1)) % MOD
        ans %= MOD
    ans = ans * inv_N % MOD
    print(ans)

if __name__ == '__main__':
    main()