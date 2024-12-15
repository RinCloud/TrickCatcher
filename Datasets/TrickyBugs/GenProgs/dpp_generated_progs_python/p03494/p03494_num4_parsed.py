N = int(input())
A = list(map(int, input().split()))

max_operations = 0
all_even = True

while all_even:
    for i in range(N):
        if A[i] % 2 != 0:
            all_even = False
            break
        A[i] //= 2
    if all_even:
        max_operations += 1

print(max_operations)