def simplify(x, n):
    # Step 1: Extract the numerators and denominators of x and n
    numerator_x, denominator_x = map(int, x.split('/'))
    numerator_n, denominator_n = map(int, n.split('/'))
    
    # Step 2: Calculate the product of x and n
    product = numerator_x * numerator_n / (denominator_x * denominator_n)
    
    # Step 3: Check if the product is a whole number
    if product % 1 == 0:
        return True
    else:
        return False