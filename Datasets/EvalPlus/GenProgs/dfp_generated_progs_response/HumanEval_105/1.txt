def by_length(arr):
    num_names = {1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine"}
    sorted_arr = sorted([num for num in arr if 1 <= num <= 9])
    reversed_arr = sorted_arr[::-1]
    return [num_names[num] for num in reversed_arr]