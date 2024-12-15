import sys

def optimal_distribution(N, x, a):
    # Sort the children's desired sweets in ascending order
    sorted_a = sorted(a)
    
    # Calculate the cumulative sum of the sorted_a list
    cum_sum = [0] * N
    cum_sum[0] = sorted_a[0]
    for i in range(1, N):
        cum_sum[i] = cum_sum[i-1] + sorted_a[i]
    
    # Count the number of happy children
    count = 0
    for i in range(N):
        if cum_sum[i] <= x:
            count += 1
    
    return count

# Read input from stdin
input_lines = sys.stdin.readlines()
N, x = map(int, input_lines[0].split())
a = list(map(int, input_lines[1].split()))

# Call the function and print the result
result = optimal_distribution(N, x, a)
print(result)