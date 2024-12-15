def unique_digits(x):
    result = []
    for i in x:
        num_str = str(i)
        has_even = any(int(digit) % 2 == 0 for digit in num_str)
        if not has_even:
            result.append(i)
    result.sort()
    return result