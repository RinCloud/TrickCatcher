def simplify(x, n):
    # Convert strings to fractions
    x_fraction = x.split("/")
    n_fraction = n.split("/")
    
    # Calculate the product of the fractions
    product = int(x_fraction[0]) * int(n_fraction[0]) / (int(x_fraction[1]) * int(n_fraction[1]))
    
    # Check if the product is a whole number
    if product.is_integer():
        return True
    else:
        return False