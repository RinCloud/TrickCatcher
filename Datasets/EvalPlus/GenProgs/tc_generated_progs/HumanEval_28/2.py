from typing import List
def concatenate(strings: List[str]) -> str:
    """ Concatenate list of strings into a single string
    >>> concatenate([])
    ''
    >>> concatenate(['a', 'b', 'c'])
    'abc'
    """
    if len(strings) == 0:
        return ''
    
    for s in strings:
        if not isinstance(s, str):
            return ''
    
    return ''.join(strings)