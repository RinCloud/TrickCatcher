# Define a function to find the minimum number of balls that need to be rewritten
def min_balls(N, K, A):
    # Count the frequency of each integer in the list
    frequency = {}
    for ball in A:
        if ball in frequency:
            frequency[ball] += 1
        else:
            frequency[ball] = 1
    
    # Sort the frequencies in descending order
    sorted_freq = sorted(frequency.values(), reverse=True)
    
    # Determine the number of balls that need to be rewritten
    num_rewrites = N - sum(sorted_freq[:K])
    
    return num_rewrites

# Read the input from standard input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Call the function and print the result
print(min_balls(N, K, A))