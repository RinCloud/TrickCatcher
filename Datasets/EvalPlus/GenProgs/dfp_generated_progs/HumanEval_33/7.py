def sort_third(l: list):
    l_div_three = [l[i] for i in range(len(l)) if i % 3 == 0]
    l_sorted = sorted(l_div_three)
    l_new = []
    i = 0
    for idx, val in enumerate(l):
        if idx % 3 != 0:
            l_new.append(val)
        else:
            l_new.append(l_sorted[i])
            i += 1
    return l_new