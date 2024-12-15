import math

def count_pairs(L, R):
    MOD = 10**9 + 7
    count = 0
    
    for x in range(L, R+1):
        for y in range(x, R+1):
            remainder = y % x
            xor = y ^ x
            
            if remainder == xor:
                count += 1
    
    return count % MOD

L, R = map(int, input().split())

result = count_pairs(L, R)
print(result)