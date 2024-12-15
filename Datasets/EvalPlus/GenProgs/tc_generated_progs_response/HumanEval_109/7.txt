def move_one_ball(arr):
    if len(arr) == 0:
        return True
    if len(arr) == 1:
        return True
    if arr[0] > arr[-1]:  # Check if the first element is greater than the last element
        return False
    if arr[0] == arr[1]:  # Check if the first two elements are the same
        return move_one_ball(arr[1:])
    else:
        return move_one_ball(arr[1:])  # Perform right shift by moving all elements forward by 1 position
  