from typing import List
def concatenate(strings: List[str]) -> str:
    """
    Concatenate list of strings into a single string
    
    Args:
    strings (List[str]): List of strings
    
    Returns:
    str: Concatenated string
    
    Examples:
    >>> concatenate([])
    ''
    >>> concatenate(['a', 'b', 'c'])
    'abc'
    """
    return ''.join(strings)