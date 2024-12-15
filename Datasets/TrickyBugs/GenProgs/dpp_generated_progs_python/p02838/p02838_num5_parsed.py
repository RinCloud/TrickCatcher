N = int(input())

A = list(map(int, input().split()))

sum = 0

for i in range(N - 1):
    for j in range(i + 1, N):
        xor_val = A[i] ^ A[j]
        sum += xor_val
        sum %= 1000000007

print(sum)
