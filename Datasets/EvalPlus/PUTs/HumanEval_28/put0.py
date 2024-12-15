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
    if not isinstance(strings[0], str):
        return ''
    return ''.join(map(str, strings))

