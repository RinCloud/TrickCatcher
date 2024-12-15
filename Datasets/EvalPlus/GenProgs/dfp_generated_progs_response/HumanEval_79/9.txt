def decimal_to_binary(decimal):
    binary = bin(decimal)
    binary_string = 'db' + binary[2:] + 'db'
    return binary_string