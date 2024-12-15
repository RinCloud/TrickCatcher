MOD = 998244353

def compute_lcm(i, j, sequence):
    lcm = sequence[i]
    for k in range(i+1, j+1):
        lcm = (lcm * sequence[k]) // gcd(lcm, sequence[k])
    return lcm

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def find_sum(sequence):
    N = len(sequence)
    total_sum = 0
    for i in range(N-1):
        for j in range(i+1, N):
            total_sum = (total_sum + compute_lcm(i, j, sequence)) % MOD
    return total_sum

N = int(input())
sequence = list(map(int, input().split()))

print(find_sum(sequence))