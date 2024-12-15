# Reading input from Standard Input
n = int(input())
a = list(map(int, input().split()))

# Initializing variables
travel_cost = 0
for i in range(1, n):
    travel_cost += abs(a[i] - a[i-1])

# Calculating the total cost of travel when the visit to
# each spot is cancelled
for i in range(n):
    if i == 0:
        diff = abs(a[i+1] - a[i])
    elif i == n-1:
        diff = abs(a[i] - a[i-1])
    else:
        diff = abs(a[i+1] - a[i-1])

    cancel_cost = travel_cost - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) + diff
    print(cancel_cost)