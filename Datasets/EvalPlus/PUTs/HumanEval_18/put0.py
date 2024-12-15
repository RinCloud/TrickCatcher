

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    """
    string = string.lower()
    substring = substring.lower()
    if substring in string:
        return sum(1 for i in range(len(string)) if string[i:i + len(substring)] == substring)
    return 0

