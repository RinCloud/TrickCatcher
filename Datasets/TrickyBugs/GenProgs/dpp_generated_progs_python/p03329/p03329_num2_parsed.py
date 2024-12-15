def withdrawal_operations(N):
    operations = 0
    
    while N > 0:
        # Check if the N yen can be withdrawn using 1 yen
        if N % 9 == 0:
            operations += N // 9
            break
        
        # Check if the N yen can be withdrawn using 6 yen
        if N % 6 == 0:
            operations += N // 6
            break
        
        # Subtract the largest possible power of 9 less than N
        power_of_9 = 1
        while power_of_9 * 9 <= N:
            power_of_9 *= 9
        N -= power_of_9
        operations += 1
    
    return operations


# Read the input from standard input
N = int(input())

# Calculate the minimum number of operations required to withdraw N yen
min_operations = withdrawal_operations(N)

# Print the minimum number of operations
print(min_operations)