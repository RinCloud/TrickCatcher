def solve(s):
    import string
    return "".join([c.swapcase() if c.isalpha() else c for c in s]) if any(
        c.isalpha() for c in s) else s[::-1]