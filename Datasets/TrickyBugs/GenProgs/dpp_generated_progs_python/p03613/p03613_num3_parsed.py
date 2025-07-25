def maximize_count(N, A):
    # Count the frequency of each number in the sequence
    frequency = {}
    for num in A:
        frequency[num] = frequency.get(num, 0) + 1
    
    # Find the maximum frequency
    max_frequency = max(frequency.values())
    
    # Find the numbers with maximum frequency
    max_numbers = [num for num, count in frequency.items() if count == max_frequency]
    
    return max_frequency

# Read input values
N = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
print(maximize_count(N, A))
