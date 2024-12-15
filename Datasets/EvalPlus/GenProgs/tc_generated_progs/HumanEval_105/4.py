def by_length(arr):
    if not arr:
        return []
    
    filtered_arr = [x for x in arr if 1 <= x <= 9]
    if not filtered_arr:
        return []
    
    filtered_arr.sort()
    filtered_arr.reverse()
    
    digits_mapping = {
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
    
    res = [digits_mapping[num] for num in filtered_arr]
    
    return res