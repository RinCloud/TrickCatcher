from typing import List
def string_xor(a: str, b: str) -> str:
    """ Input are two strings a and b consisting only of 1s and 0s.
    Perform binary XOR on these inputs and return result also as a string.
    >>> string_xor('010', '110')
    '100'
    """
    # Convert binary strings to integers, perform XOR operation, convert back to binary string, and remove '0b' prefix
    return bin(int(a, 2) ^ int(b, 2))[2:].zfill(len(a))