def same_chars(s0: str, s1: str):
    """
    Check if two words have the same characters.
    >>> same_chars('eabcdzzzz', 'dddzzzzzzzddeddabc')
    True
    >>> same_chars('abcd', 'dddddddabc')
    True
    >>> same_chars('dddddddabc', 'abcd')
    True
    >>> same_chars('eabcd', 'dddddddabc')
    False
    >>> same_chars('abcd', 'dddddddabce')
    False
    >>> same_chars('eabcdzzzz', 'dddzzzzzzzddddabc')
    False
    """
    s0 = s0.lower()
    s1 = s1.lower()
    s0_chars = {}
    s1_chars = {}
    for char in s0:
        s0_chars[char] = s0_chars.get(char, 0) + 1
        
    for char in s1:
        s1_chars[char] = s1_chars.get(char, 0) + 1
    return s0_chars == s1_chars