def move_one_ball(arr):
    if len(arr) == 0:
        return True
    sorted_arr = sorted(arr)
    for i in range(len(arr)):
        if arr == sorted_arr:
            return True
        arr.insert(0, arr.pop())
    return False