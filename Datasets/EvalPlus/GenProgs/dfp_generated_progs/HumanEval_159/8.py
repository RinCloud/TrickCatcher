def eat(number, need, remaining):
    total_eaten = number + min(need, remaining)
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]