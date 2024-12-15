def solve(N):
    if N < 10:
        return bin(N)[2:]
    else:
        total_sum = sum(int(digit) for digit in str(N))
        return bin(total_sum)[2:]