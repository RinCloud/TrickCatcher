N, M, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

max_books = 0
time = 0
i = 0
j = 0

while i < N and time + A[i] <= K:
    time += A[i]
    max_books += 1
    i += 1

while j < M and i >= 0:
    time += B[j]
    j += 1

    while i > 0 and time > K:
        i -= 1
        time -= A[i]

    if time <= K:
        max_books = max(max_books, i+j)

print(max_books)