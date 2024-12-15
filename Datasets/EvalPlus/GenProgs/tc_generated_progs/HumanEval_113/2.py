def odd_count(lst):
    """Given a list of strings, where each string consists of only digits, return a list.
    Each element i of the output should be "the number of odd elements in the
    string i of the input." where all the i's should be replaced by the number
    of odd digits in the i'th string of the input.
    >>> odd_count(['1234567'])
    ["the number of odd elements 4 in the string 1234567 of the input."]
    >>> odd_count(['3',"11111111"])
    ["the number of odd elements 1 in the string 3 of the input.",
     "the number of odd elements 8 in the string 11111111 of the input."]
    """
    
    return [f"the number of odd elements {sum([int(digit) % 2 != 0 for digit in lst[i]])} in the string {lst[i]} of the input." for i in range(len(lst))]