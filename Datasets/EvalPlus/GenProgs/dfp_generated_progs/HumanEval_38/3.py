def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    # split string into groups of three characters
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    
    # reverse the cycle in each group
    groups = [(group[-1] + group[:2]) if len(group) == 3 else group for group in groups]
    
    # join the groups and return the decoded string
    return "".join(groups)