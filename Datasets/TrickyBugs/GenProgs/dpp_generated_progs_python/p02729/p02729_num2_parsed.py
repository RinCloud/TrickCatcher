def count_ways(N, M):
    # Check if N is zero or one (no even numbers)
    if N == 0 or N == 1:
        return 0
    
    # Calculate the number of ways to choose even numbers
    even_ways = (N * (N - 1)) // 2
    
    # Calculate the number of ways to choose odd numbers
    odd_ways = (M * (M - 1)) // 2
    
    # Calculate the number of ways to choose one even and one odd number
    mixed_ways = N * M
    
    # Calculate the total number of ways
    total_ways = even_ways + odd_ways + mixed_ways
    
    return total_ways


# Read input from standard input
N, M = map(int, input().split())

# Calculate and print the answer
answer = count_ways(N, M)
print(answer)