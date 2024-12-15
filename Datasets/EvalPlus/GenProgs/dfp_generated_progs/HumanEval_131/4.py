def digits(n):
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
    if product == 1:
        product = 0
    return product