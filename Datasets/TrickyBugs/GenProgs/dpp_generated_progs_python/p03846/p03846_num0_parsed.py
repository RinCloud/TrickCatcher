from math import factorial

MOD = 10**9+7

def pow_mod(a, b):
    res = 1
    while b > 0:
        if b & 1:
            res = (res * a) % MOD
        a = (a * a) % MOD
        b >>= 1
    return res

def inverse_mod(a):
    return pow_mod(a, MOD-2)

def calculate_possible_orders(N, A):
    max_diff = N - 1
    freq = [0] * (max_diff + 1)

    for i in range(N):
        if A[i] > max_diff or freq[A[i]] > 0:
            return 0
        freq[A[i]] += 1

    ans = factorial(N)
    for i in range(1, max_diff + 1):
        ans = (ans * inverse_mod(pow_mod(i, freq[i]))) % MOD

    return ans

# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the number of possible orders
print(calculate_possible_orders(N, A))