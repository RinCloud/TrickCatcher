def string_xor(a: str, b: str) -> str:
    return bin(int(a, 2) ^ int(b, 2))[2:].zfill(max(len(a), len(b)))