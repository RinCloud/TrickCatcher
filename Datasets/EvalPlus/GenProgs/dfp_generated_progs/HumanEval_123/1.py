def get_odd_collatz(n):
    collatz_seq = [n]
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        collatz_seq.append(n)
    return sorted(set(filter(lambda x: x % 2 != 0, collatz_seq)))  # using set to remove duplicates and sorting the final list in increasing order.