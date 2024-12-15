def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices..
    Examples:
        add([4, 2, 6, 7]) ==> 2 
    """
    idx = 1
    ans = 0
    while idx < len(lst):
        if lst[idx] % 2 == 0:
            ans += lst[idx]
        idx += 2
    return ans