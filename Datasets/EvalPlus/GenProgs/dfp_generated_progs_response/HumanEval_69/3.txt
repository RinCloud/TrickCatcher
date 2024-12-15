def search(lst):
    # Initialize a dictionary to store the frequency of each integer in the list
    freq = {}
    
    # Count the frequency of each integer and store it in the dictionary
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    
    # Find the greatest integer that has a frequency greater than or equal to the value of the integer itself
    greatest_integer = -1
    for num in freq:
        if freq[num] >= num and num > greatest_integer:
            greatest_integer = num
    
    return greatest_integer