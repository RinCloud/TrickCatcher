def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = remaining - need
    if carrots_left < 0:
        carrots_left = 0
    return [total_eaten, carrots_left]