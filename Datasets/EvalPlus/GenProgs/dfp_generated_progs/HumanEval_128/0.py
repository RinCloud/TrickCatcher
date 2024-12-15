def prod_signs(arr):
    if len(arr) == 0:
        return None
    magnitude_sum = sum([abs(n) for n in arr])
    sign_product = 1
    for n in arr:
        sign_product *= 1 if n > 0 else -1 if n < 0 else 0
    return magnitude_sum * sign_product