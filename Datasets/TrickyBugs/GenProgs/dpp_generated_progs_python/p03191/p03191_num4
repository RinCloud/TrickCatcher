MOD = 10**9 + 7

def solve(N, A):
    MOD = 10**9 + 7
    
    # Count number of -1
    cnt = A.count(-1)
    
    # Compute the number of different sequences that B_1, B_2, ..., B_N can be
    ans = 1
    for i in range(N):
        ans = ans * (cnt - i) % MOD
    
    return ans

# Read input
N = int(input())
A = list(map(int, input().split()))

# Solve the problem
result = solve(N, A)

# Print the result
print(result)