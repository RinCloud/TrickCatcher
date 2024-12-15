def solve(N):
    # Convert N to binary representation
    binary_digits = bin(N)[2:]
    # Calculate the sum of the digits in binary
    binary_sum = sum(int(digit) for digit in binary_digits)
    # Convert the binary sum to binary representation
    binary_sum_binary = bin(binary_sum)[2:]
    return binary_sum_binary