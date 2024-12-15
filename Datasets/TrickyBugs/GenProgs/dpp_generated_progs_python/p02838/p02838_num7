import itertools

def sum_of_xor(N, A):
    MOD = 10**9 + 7
    total_sum = 0
    
    for i in range(N-1):
        for j in range(i+1, N):
            total_sum += A[i] ^ A[j]
            
    return total_sum % MOD

# Read input
N = int(input())
A = list(map(int, input().split()))

# Call function and output result
print(sum_of_xor(N, A))