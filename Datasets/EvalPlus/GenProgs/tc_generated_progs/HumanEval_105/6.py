def by_length(arr):
    if not arr:
        return []
    filtered_arr = [x for x in arr if 1 <= x <= 9]
    sorted_arr = sorted(filtered_arr)
    reversed_arr = sorted_arr[::-1]
    res = []
    for num in reversed_arr:
        if num == 1:
            res.append("One")
        elif num == 2:
            res.append("Two")
        elif num == 3:
            res.append("Three")
        elif num == 4:
            res.append("Four")
        elif num == 5:
            res.append("Five")
        elif num == 6:
            res.append("Six")
        elif num == 7:
            res.append("Seven")
        elif num == 8:
            res.append("Eight")
        elif num == 9:
            res.append("Nine")
    return res