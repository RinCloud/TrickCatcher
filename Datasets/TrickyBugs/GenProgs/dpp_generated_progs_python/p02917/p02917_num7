# Reading the input
N = int(input())
B = list(map(int, input().split()))

# Calculate the sum of A
sum_A = B[0] + B[N-2]

for i in range(N-2):
    sum_A += min(B[i], B[i+1])

print(sum_A)