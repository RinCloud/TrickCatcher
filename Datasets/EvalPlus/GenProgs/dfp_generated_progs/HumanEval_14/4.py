def all_prefixes(string: str) -> List[str]:
    """ Return list of all prefixes from shortest to longest of the input string """
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[:i+1])
    return prefixes