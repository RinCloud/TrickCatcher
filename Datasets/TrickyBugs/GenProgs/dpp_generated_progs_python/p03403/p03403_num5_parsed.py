N = int(input())
A = list(map(int, input().split()))

# Calculate the total cost of travel for the original plan
total_cost = sum([abs(A[i] - A[i-1]) for i in range(1, N)])

# Calculate the total cost of travel when the visit to Spot i is canceled
for i in range(N):
    if i == 0:
        canceled_cost = total_cost - abs(A[i] - A[i+1])
    elif i == N-1:
        canceled_cost = total_cost - abs(A[i-1] - A[i])
    else:
        canceled_cost = total_cost - abs(A[i-1] - A[i]) - abs(A[i] - A[i+1])
    print(canceled_cost)
