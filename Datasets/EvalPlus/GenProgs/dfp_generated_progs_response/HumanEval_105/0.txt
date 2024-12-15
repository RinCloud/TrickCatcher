def by_length(arr):
    num_dict = {1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine"}
    result = []
    for num in arr:
        if 1 <= num <= 9:
            result.append(num_dict[num])
    result.sort()
    result.reverse()
    return result