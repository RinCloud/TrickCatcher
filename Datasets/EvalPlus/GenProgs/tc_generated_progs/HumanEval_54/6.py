def same_chars(s0: str, s1: str):
    # Check if two words have the same characters.
    return sorted(s0.lower()) == sorted(s1.lower())