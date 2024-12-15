


def sum_squares(lst):
    """"
    This function will take a list of integers. For all entries in the list, the function shall square the integer entry if its index is a 
    multiple of 3 and will cube the integer entry if its index is a multiple of 4 and not a multiple of 3. The function will not 
    change the entries in the list whose indexes are not a multiple of 3 or 4. The function shall then return the sum of all entries. 
    
    Examples:
    For lst = [1,2,3] the output should be 6
    For lst = []  the output should be 0
    For lst = [-1,-5,2,-1,-5]  the output should be -126
    """
    # empty list
    if len(lst) == 0:
        return 0
    # list with one element
    if len(lst) == 1:
        return lst[0]
    # list with two elements
    if len(lst) == 2:
        return lst[0] + lst[1]
    # list with more than two elements
    else:
        lst_len = len(lst)
        sum_squares = 0
        for i in range(lst_len):
            if (i % 3 == 0):
                sum_squares += lst[i]**2
            elif (i % 4 == 0) and (i % 3 != 0):
                sum_squares += lst[i]**3
            else:
                sum_squares += lst[i]
        return sum_squares


