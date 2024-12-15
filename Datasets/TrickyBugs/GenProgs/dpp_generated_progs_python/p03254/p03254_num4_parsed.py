def distribute_sweets(N, x, a):
    total_sweets = sum(a)
    remaining_sweets = x - total_sweets

    if remaining_sweets < 0:
        remaining_sweets = 0

    happy_children = 0

    for i in range(N):
        if a[i] <= remaining_sweets:
            remaining_sweets -= a[i]
            happy_children += 1

    return happy_children


# Read input values
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Call the function and print the result
print(distribute_sweets(N, x, a))
