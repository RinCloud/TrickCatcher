from typing import List
def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    """
    Filter an input list of strings only for ones that contain given substring
    
    Parameters:
    strings (List[str]): The list of strings to be filtered
    substring (str): The substring used for filtering
    
    Returns:
    List[str]: The filtered list of strings
    
    Examples:
    >>> filter_by_substring([], 'a')
    []
    >>> filter_by_substring(['abc', 'bacd', 'cde', 'array'], 'a')
    ['abc', 'bacd', 'array']
    """
    return [s for s in strings if substring in s]