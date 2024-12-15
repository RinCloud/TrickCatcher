'''
Approach:
- For each subsequence of length K, find the smallest element and remove it.
- Keep track of the smallest difference between the largest and smallest element removed.
- Return the smallest difference.

Time complexity analysis:
- We need to find the minimum value K times. So, the time complexity of finding minimum is O(K).
- We need to do this Q times. So, the overall time complexity is O(Q*K).
'''

def smallest_difference(N, K, Q, A):
    # Initialize the smallest difference to a large value
    smallest_diff = float('inf')

    # Iterate over all possible subsequence starting positions
    for i in range(N - K + 1):
        # Get the subsequence
        subsequence = A[i:i+K]
        
        # Find the smallest element in the subsequence
        smallest = min(subsequence)
        
        # Remove the smallest element from the subsequence
        subsequence.remove(smallest)
        
        # Get the largest and smallest element removed
        largest_removed = max(subsequence)
        smallest_removed = smallest
        
        # Calculate the difference between the largest and smallest element removed
        diff = largest_removed - smallest_removed
        
        # Update the smallest difference if necessary
        smallest_diff = min(smallest_diff, diff)
    
    return smallest_diff

# Read input
N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

# Call function and print result
result = smallest_difference(N, K, Q, A)
print(result)
