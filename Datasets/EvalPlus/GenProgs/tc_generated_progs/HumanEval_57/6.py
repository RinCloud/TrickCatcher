def monotonic(l: list):
    if len(l) <= 1:
        return True
    direction = 1 if l[0] < l[1] else -1
    for i in range(1, len(l)):
        if direction == 1:
            if l[i] < l[i-1]:
                return False
        elif direction == -1:
            if l[i] > l[i-1]:
                return False
    return True