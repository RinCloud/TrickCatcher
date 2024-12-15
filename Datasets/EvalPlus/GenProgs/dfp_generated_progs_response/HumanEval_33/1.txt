def sort_third(l: list):
    sorted_third = sorted(l[::3])
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            result.append(sorted_third.pop(0))
        else:
            result.append(l[i])
    return result