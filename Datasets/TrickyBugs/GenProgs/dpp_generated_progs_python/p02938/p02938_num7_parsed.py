MOD = 10**9 + 7

def calculate_pairs(L, R):
    count = 0
    x = L
    while x <= R:
        y = x
        while y <= R:
            if (y % x) == (y ^ x):
                count += 1
            y += 1
        x += 1
    return count % MOD

L, R = map(int, input().split())
result = calculate_pairs(L, R)
print(result)