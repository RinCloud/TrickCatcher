def unique_digits(x):
    result = []
    for i in x:
        if i < 10 or all(int(digit) % 2 != 0 for digit in str(i)):
            result.append(i)
    result.sort()
    return result