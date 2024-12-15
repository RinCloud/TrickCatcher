def by_length(arr):
    digit_names = {
        1: "One",
        2: "Two",
        3: "Three",
        4: "Four",
        5: "Five",
        6: "Six",
        7: "Seven",
        8: "Eight",
        9: "Nine"
    }
    sorted_arr = sorted(filter(lambda x: 1 <= x <= 9, arr))
    reversed_arr = sorted_arr[::-1]
    digit_names_arr = [digit_names[num] for num in reversed_arr]
    return digit_names_arr