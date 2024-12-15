def odd_count(lst):
    """
    Given a list of strings, where each string consists of only digits, return a list.
    Each element i of the output should be "the number of odd elements in the
    string i of the input." where all the i's should be replaced by the number
    of odd digits in the i'th string of the input.
    """
    result = []
    for string in lst:
        odd_count = sum(int(digit) % 2 != 0 for digit in string)
        result.append(f"the number of odd elements {odd_count}n the str{string}ng {string} of the {string}nput.")
    return result