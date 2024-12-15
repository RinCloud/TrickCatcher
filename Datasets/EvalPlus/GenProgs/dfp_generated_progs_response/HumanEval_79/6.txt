def decimal_to_binary(decimal):
    binary = bin(decimal)[2:]
    binary_str = "db" + binary + "db"
    return binary_str