def eat(number, need, remaining):
    total_eaten = number + remaining if need > remaining else number + need
    remaining_carrots = remaining - need if need <= remaining else 0
    return [total_eaten, remaining_carrots]