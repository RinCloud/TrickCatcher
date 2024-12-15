# Input
N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

# Initialize answer with a large value
answer = float('inf')

# Loop through each element in the sequence as the starting point of the subsequence
for i in range(N):
    # Choose a contiguous subsequence of length K starting from index i
    subseq = A[i:i+K]
    # Sort the subsequence in ascending order
    subseq.sort()
    
    # If there are enough elements in the subsequence to perform Q operations
    if len(subseq) >= Q:
        # Remove the smallest element Q times
        for _ in range(Q):
            subseq.remove(min(subseq))
        # Update the answer with the minimum difference between X and Y
        answer = min(answer, max(subseq) - min(subseq))

# Print the smallest possible value of X-Y
print(answer)