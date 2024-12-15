N = int(input())
A = list(map(int, input().split()))

min_sadness = float('inf')

for b in range(min(A) - N, max(A) + N + 1):
    sadness = sum(abs(a - (b + i + 1)) for i, a in enumerate(A))
    min_sadness = min(min_sadness, sadness)

print(min_sadness)