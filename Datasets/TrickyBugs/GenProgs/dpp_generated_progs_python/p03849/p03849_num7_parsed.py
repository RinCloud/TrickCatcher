MOD = 10**9 + 7

def count_pairs(N):
    num_pairs = 0
    for u in range(N+1):
        for v in range(N+1):
            a = u ^ v
            b = v - a
            if a >= 0 and b >= 0 and a + b == v:
                num_pairs += 1
    
    return num_pairs % MOD

N = int(input())
result = count_pairs(N)
print(result)