N = int(input())
A = list(map(int, input().split()))

min_sadness = float('inf')

for b in range(1, N+1):
    sadness = sum(abs(A[i] - (b+i)) for i in range(N))
    min_sadness = min(min_sadness, sadness)

print(min_sadness)