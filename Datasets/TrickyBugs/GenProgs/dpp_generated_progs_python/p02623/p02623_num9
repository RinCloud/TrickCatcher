N, M, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Sort the books on each desk in ascending order of reading time
A.sort()
B.sort()

# Initialize variables
total_time = 0
books_read = 0
a_index = 0
b_index = 0

# Continue reading books until total_time exceeds K or all books are read
while total_time <= K:
    # Check if all books on both desks are read
    if a_index == N and b_index == M:
        break
    
    # Get the next book from either desk A or desk B, whichever has the minimum reading time
    if a_index == N:
        total_time += B[b_index]
        b_index += 1
    elif b_index == M:
        total_time += A[a_index]
        a_index += 1
    elif A[a_index] <= B[b_index]:
        total_time += A[a_index]
        a_index += 1
    else:
        total_time += B[b_index]
        b_index += 1
    
    # Increment the number of books read
    books_read += 1

# Subtract 1 from books_read because the last book read was not within the time limit
books_read -= 1

print(books_read)