def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    
    Examples
    solution([5, 8, 7, 1]) ==> 10
    solution([3, 3, 3, 3, 3]) ==> 6
    solution([30, 13, 24, 321]) ==> 13
    """
    
    if len(lst) == 1:
        return 0
    else:
        return sum([x for i, x in enumerate(lst) if i % 2 != 0 and x % 2 != 0])