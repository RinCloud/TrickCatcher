def max_books(N, M, K, A, B):
    max_books = 0
    total_time = 0
    i = 0
    j = 0
    
    while i < N and total_time + A[i] <= K:
        total_time += A[i]
        i += 1
        max_books += 1
    
    while j < M and i >= 0:
        total_time += B[j]
        j += 1
        
        while total_time > K and i > 0:
            i -= 1
            total_time -= A[i]
        
        if total_time <= K:
            max_books = max(max_books, i + j)
    
    return max_books

# read input
N, M, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# print output
print(max_books(N, M, K, A, B))
