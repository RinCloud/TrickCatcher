def solve(N):
    binary = bin(N)[2:]  # Convert N to binary and remove the "0b" prefix
    sum_digits = sum(map(int, binary))  # Convert each digit in the binary to integer and sum them
    return bin(sum_digits)[2:]  # Convert the sum of digits back to binary and remove the "0b" prefix