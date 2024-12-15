N, M, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Sum up the times to read all books on Desk A
sum_A = sum(A)

# Sum up the times to read all books on Desk B
sum_B = sum(B)

# Initialize the maximum number of books read
max_books = 0

# Iterate over each possible number of books read on Desk A
for num_A in range(N + 1):
    # Calculate the remaining time after reading num_A books on Desk A
    remaining_time = K - sum_A * num_A
    
    # If the remaining time is negative, break the loop
    if remaining_time < 0:
        break
    
    # Calculate the maximum number of books that can be read on Desk B
    num_B = min(M, remaining_time // sum_B)
    
    # Calculate the total number of books read
    total_books = num_A + num_B
    
    # Update the maximum number of books read
    max_books = max(max_books, total_books)

# Print the maximum number of books that can be read
print(max_books)