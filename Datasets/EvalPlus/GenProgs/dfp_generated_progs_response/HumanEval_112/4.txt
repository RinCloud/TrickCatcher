def reverse_delete(s,c):
    # delete characters in s that are equal to any character in c
    s = ''.join([x for x in s if x not in c])
    
    # check if the result string is a palindrome
    is_palindrome = s == s[::-1]
    
    # return the result string and the check
    return s, is_palindrome