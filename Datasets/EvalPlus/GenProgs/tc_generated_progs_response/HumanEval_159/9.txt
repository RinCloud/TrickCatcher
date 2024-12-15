def eat(number, need, remaining):
    if number + remaining < need:
        return [number + remaining, 0]
    elif number + remaining >= need:
        return [number + need, remaining - need] if remaining >= need else [number + remaining, 0]  