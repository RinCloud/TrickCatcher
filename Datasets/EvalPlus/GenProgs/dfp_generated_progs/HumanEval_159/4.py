def eat(number, need, remaining):
    total = number + remaining
    if total >= need:
        eaten_carrots = need
        remaining_carrots = total - need
    else:
        eaten_carrots = total
        remaining_carrots = 0
        
    return [eaten_carrots, remaining_carrots]