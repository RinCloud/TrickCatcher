def sort_even(l):
    odd_indices = [l[i] for i in range(len(l)) if i % 2 != 0]
    even_indices = [l[i] for i in range(len(l)) if i % 2 == 0]
    sorted_even_indices = sorted(even_indices)
    
    result = []
    for i in range(len(l)):
        if i % 2 != 0:
            result.append(odd_indices.pop(0))
        else:
            result.append(sorted_even_indices.pop(0))
    
    return result