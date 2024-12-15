def prod_signs(arr):
    if len(arr) == 0:
        return None
    else:
        product_signs = 1
        has_positive = False
        has_negative = False
        
        for num in arr:
            if num > 0:
                product_signs *= 1
                has_positive = True
            elif num < 0:
                product_signs *= -1
                has_negative = True
        
        if has_positive and has_negative:
            return sum([abs(x) for x in arr]) * product_signs
        else:
            return sum(arr) * product_signs