def prod_signs(arr):
    if len(arr) == 0:
        return None
    
    magnitude_sum = sum(abs(x) for x in arr)
    sign_product = 1
    for x in arr:
        if x > 0:
            sign_product *= 1
        elif x < 0:
            sign_product *= -1
        else:
            sign_product *= 0
    
    return magnitude_sum * sign_product