def max_books(N, M, K, A, B):
    books_removed = 0
    total_time = 0

    i = 0
    j = 0

    while i < N and total_time + A[i] <= K:
        total_time += A[i]
        i += 1
        books_removed += 1

    max_books_removed = books_removed

    while j < M and total_time + B[j] <= K:
        total_time += B[j]
        j += 1
        books_removed += 1
        max_books_removed = max(max_books_removed, books_removed)

    while i > 0 and total_time > K:
        i -= 1
        total_time -= A[i]
        books_removed -= 1
        while j < M and total_time + B[j] <= K:
            total_time += B[j]
            j += 1
            books_removed += 1
            max_books_removed = max(max_books_removed, books_removed)

    return max_books_removed


if __name__ == "__main__":
    N, M, K = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    result = max_books(N, M, K, A, B)
    print(result)
