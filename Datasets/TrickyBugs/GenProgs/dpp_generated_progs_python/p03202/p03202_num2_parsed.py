N = int(input())
A = list(map(int, input().split()))

max_chars = A[0]
total_chars = A[0]

for i in range(1, N):
    max_chars = min(max_chars-1, A[i])
    total_chars += max_chars

print(total_chars)