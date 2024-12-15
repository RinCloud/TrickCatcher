def string_sequence(n: int) -> str:
    """ Return a string containing space-delimited numbers starting from 0 upto n inclusive.
    """
    sequence = ''
    for i in range(n+1):
        sequence += str(i) + ' '
    return sequence.strip()