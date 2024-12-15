# Read the inputs
N, M, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# Sort the time required to read the books in ascending order
A.sort()
B.sort()

# Initialize variables
max_books = 0
time = 0
a_index = 0
b_index = 0

# Iterate until the total time is less than or equal to K or no more books can be read
while a_index < N and time + A[a_index] <= K:
    # Read and remove a book from desk A
    time += A[a_index]
    a_index += 1
    max_books += 1

while b_index < M and time + B[b_index] <= K:
    # Read and remove a book from desk B
    time += B[b_index]
    b_index += 1
    max_books += 1

# Print the maximum number of books that can be read
print(max_books)