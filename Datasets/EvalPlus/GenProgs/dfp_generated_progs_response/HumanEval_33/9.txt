def sort_third(l: list):
    # create a new list to store the sorted values
    sorted_values = []
    
    # iterate through the list l
    for i in range(len(l)):
        # check if the index is divisible by three
        if i % 3 == 0:
            # get the corresponding value from the original list and sort it
            sorted_value = sorted(l[i:i+3])
            # append the sorted value to the sorted_values list
            sorted_values.extend(sorted_value)
        else:
            # append the value at the current index to the sorted_values list
            sorted_values.append(l[i])
    
    return sorted_values