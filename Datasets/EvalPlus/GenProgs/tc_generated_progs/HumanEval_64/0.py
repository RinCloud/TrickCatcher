def vowels_count(s):
    """Write a function vowels_count which takes a string representing
    a word as input and returns the number of vowels in the string.
    Vowels in this case are 'a', 'e', 'i', 'o', 'u'. Here, 'y' is also a
    vowel, but only when it is at the end of the given word.
    Example:
    >>> vowels_count("abcde")
    2
    >>> vowels_count("ACEDY")
    3
    """
    vowels = "aeiou"
    count = 0
    for i, c in enumerate(s):
        if c.lower() in vowels:
            count += 1
        elif c.lower() == "y" and i == len(s) - 1:
            count += 1
    return count