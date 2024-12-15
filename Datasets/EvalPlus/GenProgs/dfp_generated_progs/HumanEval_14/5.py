from typing import List
def all_prefixes(string: str) -> List[str]:
    """
    Return list of all prefixes from shortest to longest of the input string
    
    Parameters:
    string (str): The input string
    
    Returns:
    List[str]: List of all prefixes from shortest to longest of the input string
    """
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes