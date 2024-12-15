def odd_count(lst):
    result = []
    for string in lst:
        count = sum(1 for c in string if int(c) % 2 != 0)
        result.append(f"the number of odd elements {count}n the str{count}ng {string} of the {count}nput.")
    return result