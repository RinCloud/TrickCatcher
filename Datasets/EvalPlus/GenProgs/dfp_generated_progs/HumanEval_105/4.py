def by_length(arr):
    # Sort the integers between 1 and 9
    sorted_arr = sorted([num for num in arr if num >= 1 and num <= 9])
    # Convert each integer to its corresponding name
    result_arr = []
    for num in sorted_arr:
        if num == 1:
            result_arr.append("One")
        elif num == 2:
            result_arr.append("Two")
        elif num == 3:
            result_arr.append("Three")
        elif num == 4:
            result_arr.append("Four")
        elif num == 5:
            result_arr.append("Five")
        elif num == 6:
            result_arr.append("Six")
        elif num == 7:
            result_arr.append("Seven")
        elif num == 8:
            result_arr.append("Eight")
        elif num == 9:
            result_arr.append("Nine")
    # Reverse the resulting array
    result_arr.reverse()
    return result_arr