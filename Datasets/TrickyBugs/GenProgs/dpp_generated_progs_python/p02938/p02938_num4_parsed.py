def count_pairs(L, R):
    MOD = 10**9 + 7
    
    def xor(a, b):
        result = 0
        for k in range(63, -1, -1):
            bit_a = (a >> k) & 1
            bit_b = (b >> k) & 1
            if (bit_a | bit_b) and not (bit_a & bit_b):
                result += 1 << k
        return result

    def count_pairs_helper(L, R):
        if R == L:
            return 1
        elif R < L:
            return 0
        else:
            x = L
            y = L << 1
            while y <= R and xor(y, x) != y % x:
                y += 1
            if y > R:
                return 0
            else:
                return (1 + y - x) % MOD + count_pairs_helper(y + 1, R) % MOD

    return count_pairs_helper(L, R)

L, R = map(int, input().split())
print(count_pairs(L, R))
