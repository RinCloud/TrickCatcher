from math import inf

def count_operations(N):
    # Initialize a list to store the minimum operations to reach each amount
    min_operations = [inf] * (N + 1)
    # We can reach 0 yen with 0 operations
    min_operations[0] = 0
    
    # Loop through each amount from 1 to N
    for amount in range(1, N + 1):
        # Initialize the minimum operations to a large value
        min_ops = inf
        
        # Try withdrawing 1 yen
        if amount >= 1:
            min_ops = min(min_ops, min_operations[amount - 1] + 1)
        
        # Try withdrawing 6 yen, 36 yen, 216 yen, ...
        power_of_6 = 6
        while power_of_6 <= amount:
            min_ops = min(min_ops, min_operations[amount - power_of_6] + 1)
            power_of_6 *= 6
        
        # Try withdrawing 9 yen, 81 yen, 729 yen, ...
        power_of_9 = 9
        while power_of_9 <= amount:
            min_ops = min(min_ops, min_operations[amount - power_of_9] + 1)
            power_of_9 *= 9
        
        # Store the minimum operations for the current amount
        min_operations[amount] = min_ops
    
    # Return the minimum operations to reach N yen
    return min_operations[N]


# Get the input value
N = int(input())

# Calculate and print the minimum operations to withdraw N yen
print(count_operations(N))