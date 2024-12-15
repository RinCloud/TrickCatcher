def move_one_ball(arr):
    if len(arr) < 2:
        return True
    else:
        sorted_arr = sorted(arr)
        for i in range(len(arr)):
            if arr == sorted_arr:
                return True
            arr = arr[-1:] + arr[:-1]
        return False
    return False
            