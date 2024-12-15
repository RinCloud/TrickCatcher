def reverse_delete(s,c):
    # delete all characters in s that are equal to any character in c
    result = ''.join([char for char in s if char not in c])
    # check if the result string is palindrome
    is_palindrome = result == result[::-1]
    # return the result string and whether it is palindrome or not
    return (result, is_palindrome)