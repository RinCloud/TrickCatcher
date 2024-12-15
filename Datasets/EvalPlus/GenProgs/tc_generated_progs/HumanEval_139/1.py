def special_factorial(n):
    result = 1
    for i in range(1, n+1):
        fact = 1
        for j in range(i, 0, -1):
            fact *= j
        result *= fact
    return result