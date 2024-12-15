def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    rounded_avg = round(avg)
    binary = bin(rounded_avg)
    return binary