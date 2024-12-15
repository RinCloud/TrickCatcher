def all_prefixes(string: str) -> List[str]:
    """ Return list of all prefixes from shortest to longest of the input string
    >>> all_prefixes('abc')
    ['a', 'ab', 'abc']
    """
    prefixes = []
    prefix = ''
    for char in string:
        prefix += char
        prefixes.append(prefix)
    return prefixes