def eat(number, need, remaining):
    total = number + need
    if total <= remaining:
        left = remaining - total
    else:
        left = 0
    return [total, left]