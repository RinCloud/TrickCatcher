def by_length(arr):
    numbers = {
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
    
    result = []
    valid_numbers = [num for num in arr if 1 <= num <= 9]
    valid_numbers.sort()
    valid_numbers.reverse()
    
    for num in valid_numbers:
        result.append(numbers[num])
        
    return result