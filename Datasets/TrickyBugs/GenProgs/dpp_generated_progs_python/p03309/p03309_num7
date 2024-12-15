N = int(input())
A = list(map(int, input().split()))

A.sort()

# calculate the possible values of b
possible_b = []
for i in range(N):
    b = A[i] - i
    possible_b.append(b)

# calculate the sadness for each possible b
sadness = []
for b in possible_b:
    s = sum(abs(A[i] - (b + i)) for i in range(N))
    sadness.append(s)

# find the minimum sadness
min_sadness = min(sadness)
print(min_sadness)