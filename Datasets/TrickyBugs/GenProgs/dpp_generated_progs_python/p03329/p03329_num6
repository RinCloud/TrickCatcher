def operations_required(N):
    # Generating all possible denominations of money
    denominations = set([1])
    num1 = 6
    while num1 <= N:
        denominations.add(num1)
        num1 *= 6
    num2 = 9
    while num2 <= N:
        denominations.add(num2)
        num2 *= 9
    
    # Initializing a list to keep track of minimum operations required for each amount
    min_operations = [float('inf')] * (N + 1)
    # We can withdraw 0 yen in 0 operations
    min_operations[0] = 0

    # Calculating minimum operations required for each amount
    for i in range(1, N + 1):
        for denomination in denominations:
            if i >= denomination:
                min_operations[i] = min(min_operations[i], min_operations[i-denomination] + 1)

    return min_operations[N]


# Taking input from the user
N = int(input())
# Calculating and printing the minimum operations required
print(operations_required(N))