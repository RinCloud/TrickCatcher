def get_odd_collatz(n):
    result = []
    def collatz(n):
        if n % 2 == 0:
            n = n / 2
        else:
            n = 3 * n + 1
        return int(n)
    while n != 1:
        if n % 2 == 1:
            result.append(n)
        n = collatz(n)
    if n == 1:
        result.append(1)
    return sorted(result)