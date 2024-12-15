def eat(number, need, remaining):
    total = number + need
    if total <= remaining:
        return [total, remaining - total]
    else:
        return [remaining, 0]