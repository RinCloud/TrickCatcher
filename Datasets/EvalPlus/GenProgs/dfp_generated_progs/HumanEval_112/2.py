def reverse_delete(s,c):
    # Deleting all the characters in s that are equal to any character in c
    result = "".join([char for char in s if char not in c])
    
    # Checking if the result string is a palindrome
    is_palindrome = result == result[::-1]
    
    return (result, is_palindrome)