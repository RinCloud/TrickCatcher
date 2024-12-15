def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]
def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    """
    def find_longest_palindrome_suffix(string: str) -> str:
        """
        Find the longest palindromic suffix of a given string.
        """
        if is_palindrome(string):
            return string
        
        for i in range(len(string)-1, -1, -1):
            if is_palindrome(string[i:]):
                return string[i:]
    
    longest_suffix = find_longest_palindrome_suffix(string)
    prefix = string[:len(string)-len(longest_suffix)]
    return string + prefix[::-1]