def rounded_avg(n, m):
    if n > m:
        return -1
    
    avg = int(round((n + m) / 2))
    return bin(avg)