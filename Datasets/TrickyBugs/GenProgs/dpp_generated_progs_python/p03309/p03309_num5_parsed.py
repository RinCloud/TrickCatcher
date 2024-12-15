n = int(input())
a = list(map(int, input().split()))
b = sum(a[i] - (i + 1) for i in range(n))
abs_b = abs(b)
min_sadness = abs_b
for i in range(1, n):
    b += 2
    abs_b = abs(a[i - 1] - b)
    min_sadness = min(min_sadness, abs_b)
print(min_sadness)