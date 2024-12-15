def move_one_ball(arr):
    if len(arr) <= 1:
        return True
    
    if arr[0] > arr[1]:
        return False
    else:
        return move_one_ball(arr[1:])
    
    return True