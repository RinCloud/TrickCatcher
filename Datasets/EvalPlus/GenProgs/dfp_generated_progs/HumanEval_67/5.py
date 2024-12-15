def fruit_distribution(s, n):
    """
    Calculates the number of mango fruits in a basket of mixed fruits.
    
    Args:
    - s: a string representing the total number of oranges and apples in the basket
    - n: an integer representing the total number of fruits in the basket
    
    Returns:
    - the number of mango fruits in the basket, which is equal to n - m - o, where m is the number of apples and o is the number of oranges in the basket.
    """
    m = int(s.split()[0])
    o = int(s.split()[3])
    return n - m - o