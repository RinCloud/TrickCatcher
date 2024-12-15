def sort_third(l):
    non_divisible = [l[i] for i in range(len(l)) if i % 3 != 0]
    divisible = [l[i] for i in range(len(l)) if i % 3 == 0]
    sorted_divisible = sorted(divisible)
    result = [non_divisible[i] if i % 3 != 0 else sorted_divisible.pop(0) for i in range(len(l))]
    return result