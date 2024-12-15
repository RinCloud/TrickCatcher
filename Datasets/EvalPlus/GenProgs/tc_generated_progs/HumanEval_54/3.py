def same_chars(s0: str, s1: str):
    s0 = s0.lower()
    s1 = s1.lower()
    
    return sorted(s0) == sorted(s1)