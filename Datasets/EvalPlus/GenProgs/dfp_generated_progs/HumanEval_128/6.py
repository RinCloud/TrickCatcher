def prod_signs(arr):
    if len(arr)==0:
        return None
    product_of_signs = 1
    sum_of_magnitudes = 0
    for num in arr:
        product_of_signs *= 1 if num>0 else -1 if num<0 else 0
        sum_of_magnitudes += abs(num)
    return product_of_signs * sum_of_magnitudes