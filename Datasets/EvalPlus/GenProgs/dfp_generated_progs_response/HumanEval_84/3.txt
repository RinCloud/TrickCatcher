def solve(N):
    # convert N to binary
    binary = bin(N)[2:]
    
    # sum the digits of the binary number
    binary_sum = sum(int(digit) for digit in binary)
    
    # convert the sum to binary
    binary_sum_binary = bin(binary_sum)[2:]
    
    return binary_sum_binary