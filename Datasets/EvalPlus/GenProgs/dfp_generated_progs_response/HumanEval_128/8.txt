def prod_signs(arr):
    if len(arr) == 0:
        return None
    
    magnitude_sum = sum(map(abs, arr))
    sign_product = 1
    
    for num in arr:
        if num > 0:
            sign_product *= 1
        elif num < 0:
            sign_product *= -1
    
    return magnitude_sum * sign_product