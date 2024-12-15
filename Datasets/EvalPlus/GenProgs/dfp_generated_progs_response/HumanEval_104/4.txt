def unique_digits(x):
    # create an empty list to store the unique elements
    unique_list = []
    
    # iterate over each element in the input list x
    for i in x:
        # convert the element to a string
        num_str = str(i)
        # iterate over each digit in the string
        for digit in num_str:
            # check if the digit is even
            if int(digit) % 2 == 0:
                # if any digit is even, break the loop and continue to the next element
                break
        else:
            # if the loop completes without breaking (i.e. no even digit was found)
            # add the element to the unique_list
            unique_list.append(i)
    
    # sort the unique_list in increasing order
    unique_list.sort()
    
    # return the unique_list
    return unique_list