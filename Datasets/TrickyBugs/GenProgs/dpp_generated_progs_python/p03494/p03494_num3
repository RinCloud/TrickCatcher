def max_operations(n, a):
    max_ops = 0

    # Check if all numbers are even
    even = all(num % 2 == 0 for num in a)

    # Perform operations until all numbers are odd or not all numbers are even
    while even:
        # Divide each number by 2
        a = [num // 2 for num in a]

        # Check if all numbers are still even
        even = all(num % 2 == 0 for num in a)

        # Increment the count of operations
        max_ops += 1

    return max_ops

# Get input values
n = int(input())
a = list(map(int, input().split()))

# Get the maximum number of operations
max_ops = max_operations(n, a)

# Print the result
print(max_ops)