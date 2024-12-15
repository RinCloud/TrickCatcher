def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]  # Get even indices
    even_values = [l[i] for i in even_indices]  # Get values at even indices
    sorted_even_values = sorted(even_values)  # Sort even values
    
    result = []  # Initialize result list
    
    # Iterate through the input list and replace even indices with sorted even values
    for i in range(len(l)):
        if i % 2 == 0:
            result.append(sorted_even_values.pop(0))
        else:
            result.append(l[i])
    
    return result