def get_odd_collatz(n):
    collatz_sequence = [n]
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        collatz_sequence.append(n)
    return sorted(list(set(filter(lambda x: x % 2 != 0, collatz_sequence))))