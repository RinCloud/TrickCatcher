from typing import List
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    """ Filter an input list of strings only for ones that start with a given prefix.
    Args:
    strings (List[str]): The input list of strings.
    prefix (str): The prefix to filter for.
    Returns:
    List[str]: The list of strings that start with the given prefix.
    """
    return [string for string in strings if string.startswith(prefix)]