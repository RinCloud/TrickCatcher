def get_max_triples(n):
    count = 0
    for i in range(1, n+1):
        a = i * i - i + 1
        if a % 3 == 0:
            count += 1
    
    return count