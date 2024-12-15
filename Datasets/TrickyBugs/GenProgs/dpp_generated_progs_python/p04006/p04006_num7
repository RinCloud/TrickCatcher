def min_time_to_have_slimes(N, x, a):
    min_time = a[0]
    for i in range(1, N):
        min_time = min(min_time, a[i])
    total_time = 0
    for i in range(N):
        total_time += min(min_time + x, a[i])
    return total_time

# Read input
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Call the function and print the result
print(min_time_to_have_slimes(N, x, a))