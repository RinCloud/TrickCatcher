def reverse_delete(s,c):
    # Remove characters in s that are equal to any character in c
    s = ''.join([x for x in s if x not in c])
    
    # Check if the result string is palindrome
    is_palindrome = s == s[::-1]
    
    return (s, is_palindrome)