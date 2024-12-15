def prod_signs(arr):
    if len(arr) == 0:
        return None
    else:
        product_signs = 1
        for i in range(len(arr)):
            if arr[i] > 0:
                product_signs *= 1
            elif arr[i] < 0:
                product_signs *= -1
            else:
                product_signs *= 0
        return sum([abs(x) for x in arr]) * product_signs