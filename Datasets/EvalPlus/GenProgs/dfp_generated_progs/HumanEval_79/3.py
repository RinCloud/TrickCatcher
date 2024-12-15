def decimal_to_binary(decimal):
    binary = bin(decimal)[2:]  # convert decimal to binary using bin() function and remove the "0b" prefix
    return 'db' + binary + 'db'  # add the extra characters to the binary string