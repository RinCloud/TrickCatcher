N, M, K = map(int, input().split())

MOD = 10**9 + 7

# Calculate the number of possible values modulo MOD
def calc(num, den, MOD):
    res = num
    den_inv = pow(den, MOD - 2, MOD)
    res *= den_inv
    res %= MOD
    return res

ans = 0

# Iterate over all possible values of the numerator
for num in range(1, N + 1):
    # Calculate the denominator
    den = calc(num, num + 1, MOD)
    # Calculate the number of combinations of zeros and ones
    comb = pow(den, M, MOD)
    # Calculate the number of combinations of the remaining numbers
    rem = pow(comb, N, MOD)
    ans += rem
    ans %= MOD

print(ans)