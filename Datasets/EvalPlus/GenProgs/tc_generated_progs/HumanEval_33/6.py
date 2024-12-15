def sort_third(l: list):
    l_prime = l.copy()
    l_third = []
    for i in range(len(l)):
        if i % 3 == 0:
            l_third.append(l[i])
            l_prime[i] = None
    l_third.sort()
    i = 0
    for j in range(len(l_prime)):
        if l_prime[j] is None:
            l_prime[j] = l_third[i]
            i += 1
    return l_prime