def prod_signs(arr):
    if len(arr) == 0:
        return None
    else:
        # Calculating the product of signs
        product_signs = 1
        for num in arr:
            if num > 0:
                product_signs *= 1
            elif num < 0:
                product_signs *= -1
            else:
                product_signs *= 0
                
        # Calculating the sum of magnitudes of integers multiplied by product of all signs
        result_sum = sum([abs(num) for num in arr]) * product_signs
        
        return result_sum