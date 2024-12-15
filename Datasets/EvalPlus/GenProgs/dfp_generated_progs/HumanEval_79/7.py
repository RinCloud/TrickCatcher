def decimal_to_binary(decimal):
    binary = bin(decimal).replace("0b", "")
    return "db" + binary + "db"