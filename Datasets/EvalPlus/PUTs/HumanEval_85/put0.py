
def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices..


    Examples:
        add([4, 2, 6, 7]) ==> 2 
    """

    x = len(lst)
    ans = 0
    while(x > 0):
        if(lst[x-1] % 2 == 0):
            ans += lst[x-1]
        x -= 2
    return ans
