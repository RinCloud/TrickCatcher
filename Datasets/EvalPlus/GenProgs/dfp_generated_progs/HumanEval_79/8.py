def decimal_to_binary(decimal):
    binary = bin(decimal)[2:]
    return 'db{}db'.format(binary)