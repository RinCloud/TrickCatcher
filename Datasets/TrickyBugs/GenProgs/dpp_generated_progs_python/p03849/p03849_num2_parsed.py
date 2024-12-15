# Given a positive integer N, we need to find the number of pairs of integers (u, v) (0 ≤ u, v ≤ N) such that there exist non-negative integers a and b satisfying `a xor b = u` and `a + b = v`.
# Let's write a function to solve this problem.

def find_number_of_pairs(N):
    MOD = 10**9 + 7
    
    # Count the number of bits in N
    num_bits = len(bin(N)[2:])
    
    # Calculate the number of pairs using bitwise manipulation
    count = (num_bits * pow(2, num_bits - 1, MOD)) % MOD
    
    return count

# Main code
if __name__ == "__main__":
    N = int(input().strip())
    result = find_number_of_pairs(N)
    print(result)