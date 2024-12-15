from typing import List
def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    filtered_strings = [string for string in strings if substring in string]
    return filtered_strings