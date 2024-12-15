def solve(N):
    binary = bin(N)[2:]
    sum_of_digits = sum([int(digit) for digit in str(binary)])
    return bin(sum_of_digits)[2:]