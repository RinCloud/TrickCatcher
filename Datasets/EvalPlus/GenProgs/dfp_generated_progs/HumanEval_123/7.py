def get_odd_collatz(n):
    collatz_seq = [n]
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        collatz_seq.append(n)
    odd_seq = [num for num in collatz_seq if num % 2 == 1]
    return sorted(odd_seq)