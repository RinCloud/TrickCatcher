import sys

def count_permutations(N, K, P):
    count = 0
    for i in range(N - K + 1):
        # Get the subarray of length K
        subarray = P[i:i + K]
        
        # Check if the subarray is in ascending order
        if sorted(subarray) == subarray:
            count += 1
    
    return count

# Read input from standard input
input_data = sys.stdin.readlines()
N, K = map(int, input_data[0].split())
P = list(map(int, input_data[1].split()))

# Call the count_permutations function and print the result
print(count_permutations(N, K, P))