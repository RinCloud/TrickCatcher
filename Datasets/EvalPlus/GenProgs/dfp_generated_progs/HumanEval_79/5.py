def decimal_to_binary(decimal):
    binary = bin(decimal)[2:]
    return f"db{binary}db"