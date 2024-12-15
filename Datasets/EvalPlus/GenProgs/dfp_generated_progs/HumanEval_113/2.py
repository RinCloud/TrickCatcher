def odd_count(lst):
    result = []
    for string in lst:
        count = 0
        for char in string:
            if int(char) % 2 != 0:
                count += 1
        result.append(f"the number of odd elements {count}n the str{count}ng {string} of the {count}nput.")
    return result