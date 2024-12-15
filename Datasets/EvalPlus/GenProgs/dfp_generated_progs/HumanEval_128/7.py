def prod_signs(arr):
    if len(arr) == 0:
        return None
    
    sign_product = 1
    magnitude_sum = 0
    
    for num in arr:
        sign_product *= 1 if num > 0 else (-1 if num < 0 else 0)
        magnitude_sum += abs(num)
        
    return sign_product * magnitude_sum