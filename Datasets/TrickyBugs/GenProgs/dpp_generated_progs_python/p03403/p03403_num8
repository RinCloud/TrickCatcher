# Getting inputs
N = int(input())
A = list(map(int, input().split()))

# Calculating the total cost of travel when the visit to each spot is cancelled
total_cost = sum([abs(A[i] - A[i-1]) for i in range(1, N)])

# Calculating the total cost of travel when the visit to each spot is cancelled
for i in range(N):
    if i == 0:
        print(total_cost - abs(A[i]) - abs(A[i] - A[i+1]) + abs(A[i+1]))
    elif i == N-1:
        print(total_cost - abs(A[i-1] - A[i]) - abs(A[i]))
    else:
        print(total_cost - abs(A[i-1] - A[i]) - abs(A[i] - A[i+1]) + abs(A[i-1] - A[i+1]))