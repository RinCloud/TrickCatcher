def modp(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics).
    
    Parameters:
    n -- the exponent
    p -- the modulus
    
    Returns:
    result -- the result of 2^n modulo p
    
    """
    return pow(2, n, p)