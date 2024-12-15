def reverse_delete(s, c):
    """
    Deletes all the characters in s that are equal to any character in c
    and checks if the result string is palindrome.
    
    Args:
    s -- a string
    c -- a string
    
    Returns:
    A tuple containing the result string and True/False for the palindrome check.
    """
    
    # Remove characters in s that are equal to any character in c
    result = ''.join([char for char in s if char not in c])
    
    # Check if the result string is palindrome
    is_palindrome = result == result[::-1]
    
    return result, is_palindrome