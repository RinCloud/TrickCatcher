# Function to calculate the maximum number of operations
def max_operations(N, a):
    count = 0
    for i in range(N):
        while a[i] % 2 == 0:
            a[i] //= 2
            count += 1
    return count

# Taking input from user
N = int(input())
a = list(map(int, input().split()))

# Calculating and printing the maximum number of operations
print(max_operations(N, a))