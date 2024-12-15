def sort_third(l: list):
    not_divisible_by_three = []
    divisible_by_three = []
    
    for i in range(len(l)):
        if i % 3 == 0:
            divisible_by_three.append(l[i])
        else:
            not_divisible_by_three.append(l[i])
    
    sorted_divisible_by_three = sorted(divisible_by_three)
    result = []
    
    for i in range(len(l)):
        if i % 3 == 0:
            result.append(sorted_divisible_by_three.pop(0))
        else:
            result.append(not_divisible_by_three.pop(0))
    
    return result