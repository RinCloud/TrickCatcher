from typing import List
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    filtered_strings = [string for string in strings if string.startswith(prefix)]
    return filtered_strings