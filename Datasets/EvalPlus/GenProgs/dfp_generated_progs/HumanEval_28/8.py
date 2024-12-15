from typing import List
def concatenate(strings: List[str]) -> str:
    """
    Concatenate list of strings into a single string
    
    Parameters:
    strings (List[str]): List of strings to concatenate
    
    Returns:
    str: Concatenated string
    
    Examples:
    >>> concatenate([])
    ''
    >>> concatenate(['a', 'b', 'c'])
    'abc'
    """
    return ''.join(strings)