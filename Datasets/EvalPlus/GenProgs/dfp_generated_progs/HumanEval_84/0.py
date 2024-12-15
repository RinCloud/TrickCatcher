def solve(N):
    binary = bin(N)[2:]
    sum_digits = sum(int(digit) for digit in binary)
    return bin(sum_digits)[2:]