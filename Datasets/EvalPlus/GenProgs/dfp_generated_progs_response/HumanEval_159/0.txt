def eat(number, need, remaining):
    total_eaten = number + min(need, remaining)
    remaining_after_meals = max(0, remaining - need)
    return [total_eaten, remaining_after_meals]