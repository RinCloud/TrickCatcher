from typing import List, Optional
def longest(strings: List[str]) -> Optional[str]:
    """ Out of list of strings, return the longest one. Return the first one in case of multiple
    strings of the same length. Return None in case the input list is empty.
    >>> longest([])
    >>> longest(['a', 'b', 'c'])
    'c'
    >>> longest(['a', 'bb', 'ccc'])
    'ccc'
    """
    if len(strings) == 0:
        return None
    strings = [s.lower() for s in strings]
    strings = [s for s in strings if len(s) > 0]
    strings = [s for s in strings if s]
    return max(strings, key=lambda x: (len(x), strings.index(x)))