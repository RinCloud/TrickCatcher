def is_palindrome(text: str):
    """
    Checks if given string is a palindrome
    :param text: string to be checked
    :return: True if the given string is a palindrome, False otherwise
    """
    return text == text[::-1]