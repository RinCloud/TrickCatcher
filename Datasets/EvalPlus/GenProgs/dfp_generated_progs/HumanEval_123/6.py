def get_odd_collatz(n):
    collatz_sequence = [n]
    while n > 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        collatz_sequence.append(n)
    odd_numbers = [number for number in collatz_sequence if number % 2 != 0]
    return sorted(odd_numbers)