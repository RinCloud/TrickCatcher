# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate total cost of original trip
total_cost = abs(A[0])
for i in range(1, N):
    total_cost += abs(A[i] - A[i-1])
total_cost += abs(A[N-1])

# Calculate cost for each canceled spot
for i in range(N):
    if i == 0:
        canceled_cost = abs(A[1])
    elif i == N-1:
        canceled_cost = abs(A[N-2])
    else:
        canceled_cost = abs(A[i+1] - A[i-1])
    print(total_cost - (abs(A[i]) + canceled_cost + abs(A[i])))