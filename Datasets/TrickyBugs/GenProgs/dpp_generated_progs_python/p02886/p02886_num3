# Getting the input
N = int(input())
d = list(map(int, input().split()))

# Calculating the sum of health points restored
sum_restored = 0
for i in range(N-1):
    for j in range(i+1, N):
        sum_restored += d[i] * d[j]

# Printing the result
print(sum_restored)