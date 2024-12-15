def by_length(arr):
    # Filter out numbers that are not between 1 and 9
    arr = [x for x in arr if x in range(1, 10)]
    
    # Sort the array
    arr.sort()
    
    # Reverse the array
    arr.reverse()
    
    # Create a dictionary to map numbers to their corresponding names
    names = {1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine"}
    
    # Replace each digit by its corresponding name
    arr = [names[x] for x in arr]
    
    return arr