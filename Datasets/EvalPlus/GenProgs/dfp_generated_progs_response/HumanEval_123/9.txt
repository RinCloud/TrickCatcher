def get_odd_collatz(n):
    collatz = [n]  # Start the collatz sequence with n
    while n != 1:  # Continue the sequence until n is 1
        if n % 2 == 0:  # If n is even
            n = n // 2
        else:  # If n is odd
            n = 3 * n + 1
        collatz.append(n)  # Add the next term to the collatz sequence
    # Filter the odd numbers from the collatz sequence and sort them in increasing order
    odd_numbers = sorted([num for num in collatz if num % 2 != 0])
    return odd_numbers