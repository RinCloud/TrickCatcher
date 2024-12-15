N, M, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Create a prefix sum array for books on desk A
prefix_sum_A = [0] * (N+1)
for i in range(1, N+1):
    prefix_sum_A[i] = prefix_sum_A[i-1] + A[i-1]

# Create a prefix sum array for books on desk B
prefix_sum_B = [0] * (M+1)
for i in range(1, M+1):
    prefix_sum_B[i] = prefix_sum_B[i-1] + B[i-1]

# Initialize the maximum number of books read
max_books = 0

# Iterate over the number of books read from desk A
for i in range(N+1):
    # Calculate the remaining time after reading from desk A
    remaining_time_A = K - prefix_sum_A[i]
    
    # If the remaining time is negative, break the loop
    if remaining_time_A < 0:
        break
    
    # Check the maximum number of books that can be read from desk B within the remaining time
    left = 0
    right = M
    while left <= right:
        mid = (left + right) // 2
        if prefix_sum_B[mid] <= remaining_time_A:
            left = mid + 1
        else:
            right = mid - 1
    
    # Update the maximum number of books read if needed
    max_books = max(max_books, i + right)

print(max_books)
