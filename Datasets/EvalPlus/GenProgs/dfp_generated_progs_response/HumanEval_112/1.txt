def reverse_delete(s,c):
    # Delete all characters in s that are equal to any character in c
    for char in c:
        s = s.replace(char, '')
    
    # Check if the result string is palindrome
    is_palindrome = s == s[::-1]
    
    # Return the result string and check for palindrome
    return (s, is_palindrome)