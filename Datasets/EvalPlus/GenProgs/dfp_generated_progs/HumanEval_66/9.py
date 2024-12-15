def digitSum(s):
    """
    Takes a string as input and returns the sum of the ASCII codes of the upper characters only.
    Args:
        s (str): The input string.
    Returns:
        int: The sum of the ASCII codes of the upper characters in the string.
    """
    return sum(ord(c) for c in s if c.isupper())