def min_operations(n):
    operations = [0] * (n + 1)

    for i in range(1, n + 1):
        operations[i] = float('inf')  # Initialize operations to infinity
        x = 1

        while i - x >= 0:
            operations[i] = min(operations[i], operations[i - x] + 1)
            x *= 6
        
        x = 1

        while i - x >= 0:
            operations[i] = min(operations[i], operations[i - x] + 1)
            x *= 9

    return operations[n]


# Getting input from standard input
n = int(input())

# Calling the function and printing the output
print(min_operations(n))