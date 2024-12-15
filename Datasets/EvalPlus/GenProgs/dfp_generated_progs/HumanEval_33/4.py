def sort_third(l):
    divisible3 = [l[i] for i in range(len(l)) if i % 3 == 0]
    sorted_divisible3 = sorted(divisible3)
    result = []
    j = 0
    for i in range(len(l)):
        if i % 3 == 0:
            result.append(sorted_divisible3[j])
            j += 1
        else:
            result.append(l[i])
    return result