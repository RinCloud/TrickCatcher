def prod_signs(arr):
    if len(arr) == 0:
        return None
    else:
        sign_product = 1
        magnitude_sum = 0
        for num in arr:
            sign_product *= 0 if num == 0 else abs(num) / num
            magnitude_sum += abs(num)
        return sign_product * magnitude_sum