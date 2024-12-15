from typing import List
def concatenate(strings: List[str]) -> str:
    """
    Concatenate list of strings into a single string
    
    Args:
    strings: A list of strings
    
    Returns:
    A string resulting from concatenating all the strings in the list
    """
    return ''.join(strings)