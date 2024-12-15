def solve(N):
    binary = bin(N)[2:]
    binary_sum = sum(int(x) for x in binary)
    return bin(binary_sum)[2:]