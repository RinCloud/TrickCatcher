def search(lst):
    # Create an empty dictionary to store the frequency of each integer
    frequency = {}
    
    # Iterate through the list and update the frequency dictionary
    for num in lst:
        if num in frequency:
            frequency[num] += 1
        else:
            frequency[num] = 1
    
    # Iterate through the frequency dictionary and find the greatest integer
    max_int = -1
    for key, value in frequency.items():
        if key > 0 and value >= key:
            max_int = max(max_int, key)
    
    return max_int