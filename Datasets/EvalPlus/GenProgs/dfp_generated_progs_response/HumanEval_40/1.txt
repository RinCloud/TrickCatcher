def triples_sum_to_zero(l: list):
    n = len(l)
    if n < 3:
        return False
    l.sort()
    for i in range(0, n-2):
        if i > 0 and l[i] == l[i-1]:
            continue
        left = i + 1
        right = n - 1
        while left < right:
            if l[i] + l[left] + l[right] == 0:
                return True
            elif l[i] + l[left] + l[right] < 0:
                left += 1
            else:
                right -= 1
    return False