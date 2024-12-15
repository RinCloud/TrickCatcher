# Taking input
N = int(input())
A = list(map(int, input().split()))

# Calculating total cost when visit to each spot is cancelled
for i in range(N):
    if i == 0:
        # When first spot is cancelled, total cost is the sum of absolute differences between consecutive spots
        print(sum(abs(A[j] - A[j-1]) for j in range(1, N)))
    else:
        # When any other spot is cancelled, total cost is the sum of absolute differences between spots excluding the cancelled spot
        print(sum(abs(A[j+1] - A[j]) for j in range(i-1, N-1)))