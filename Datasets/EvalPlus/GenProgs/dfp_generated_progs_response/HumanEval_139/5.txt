def special_factorial(n):
    result = 1
    for i in range(n, 0, -1):
        factorial = 1
        for j in range(i, 0, -1):
            factorial *= j
        result *= factorial
    return result