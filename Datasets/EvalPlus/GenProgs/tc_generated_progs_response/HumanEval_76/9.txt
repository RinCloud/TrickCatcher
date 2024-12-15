def is_simple_power(x, n):
    if x == 1:
        return True
    potential_power = n
    while potential_power < x:
        potential_power *= n
    return potential_power == x