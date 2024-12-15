def how_many_times(string: str, substring: str) -> int:
    """
    Find how many times a given substring can be found in the original string. Count overlaping cases.
    """
    count = 0
    if len(substring) > 0:
        for i in range(len(string) - len(substring) + 1):
            if string[i:i + len(substring)] == substring:
                count += 1
    return count