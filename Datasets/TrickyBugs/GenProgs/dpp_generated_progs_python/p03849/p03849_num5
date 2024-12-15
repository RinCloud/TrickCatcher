import sys

MOD = 10**9 + 7

def count_pairs(N):
    # Calculate the maximum value of a and b
    max_val = N + N
    
    # Initialize a list to store the count of pairs for each value of u
    count = [0] * (max_val + 1)
    
    # Iterate over all possible values of a and b
    for a in range(N + 1):
        for b in range(N + 1):
            u = a ^ b
            v = a + b
            
            # If u and v are within range, update the count
            if u <= N and v <= max_val:
                count[u] += 1
    
    # Calculate the total count of pairs
    total_count = sum(count) % MOD
    
    return total_count


if __name__ == "__main__":
    # Read the input from standard input
    N = int(sys.stdin.readline().strip())
    
    # Calculate the count of pairs
    result = count_pairs(N)
    
    # Print the result
    print(result)