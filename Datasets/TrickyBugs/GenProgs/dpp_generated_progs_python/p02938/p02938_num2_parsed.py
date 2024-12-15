MOD = 10**9 + 7

def count_pairs(L, R):
    count = 0
    for x in range(L, R+1):
        for y in range(x, R+1):
            if y % x == y ^ x:
                count += 1
    return count % MOD

L, R = map(int, input().split())
result = count_pairs(L, R)
print(result)