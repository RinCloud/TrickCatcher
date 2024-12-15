# Prompted integers
N, M = 1000, 10

# Store all factorials up to N * M + 1
factorials = [1]
for i in range(1, N * M + 1):
    factorials.append((factorials[-1] * i) % (10**9 + 7))

# Calculate the count of different possible sequences of colors
count = 0
for k in range(M + 1):
    coeff = factorials[N * k + M - 1] * pow((factorials[N - 1] * factorials[k] * factorials[M - k]) % (10**9 + 7), (10**9 + 7) - 2, (10**9 + 7))
    coeff %= 10**9 + 7
    count += coeff
    count %= 10**9 + 7

# Print the result
print(count)