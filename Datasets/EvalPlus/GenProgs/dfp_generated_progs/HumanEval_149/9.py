def sorted_list_sum(lst):
    # create an empty list to store the strings with even lengths
    even_length_lst = []
    
    # iterate through the given list
    for string in lst:
        # check if the length of the string is even
        if len(string)%2 == 0:
            # if even, add it to the even_length_lst
            even_length_lst.append(string)
    
    # sort the even_length_lst by length of each word and alphabetically
    sorted_lst = sorted(even_length_lst, key=lambda x: (len(x), x))
    
    return sorted_lst