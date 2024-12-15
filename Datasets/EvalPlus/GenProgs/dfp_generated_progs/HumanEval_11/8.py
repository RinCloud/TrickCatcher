def string_xor(a, b):
    '''
    This function takes in two strings, a and b, consisting only of 1s and 0s.
    It performs binary XOR on these inputs and returns the result as a string.
    '''
    result = ''
    for i in range(len(a)):
        if a[i] == '1' and b[i] == '1':
            result += '0'
        elif a[i] == '0' and b[i] == '0':
            result += '0'
        else:
            result += '1'
    
    return result