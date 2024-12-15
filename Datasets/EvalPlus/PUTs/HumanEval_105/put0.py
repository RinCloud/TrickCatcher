
def by_length(arr):
    """
    Given an array of integers, sort the integers that are between 1 and 9 inclusive,
    reverse the resulting array, and then replace each digit by its corresponding name from
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine".

    For example:
      arr = [2, 1, 1, 4, 5, 8, 2, 3]   
            -> sort arr -> [1, 1, 2, 2, 3, 4, 5, 8] 
            -> reverse arr -> [8, 5, 4, 3, 2, 2, 1, 1]
      return ["Eight", "Five", "Four", "Three", "Two", "Two", "One", "One"]
    
      If the array is empty, return an empty array:
      arr = []
      return []
    
      If the array has any strange number ignore it:
      arr = [1, -1 , 55] 
            -> sort arr -> [-1, 1, 55]
            -> reverse arr -> [55, 1, -1]
      return = ['One']
    """
    if not arr:
        return []
    arr = sorted(arr)
    arr.reverse()
    res = []
    for i in range(len(arr)):
        if arr[i] == 0:
            res.append("Zero")
        elif arr[i] == 1:
            res.append("One")
        elif arr[i] == 2:
            res.append("Two")
        elif arr[i] == 3:
            res.append("Three")
        elif arr[i] == 4:
            res.append("Four")
        elif arr[i] == 5:
            res.append("Five")
        elif arr[i] == 6:
            res.append("Six")
        elif arr[i] == 7:
            res.append("Seven")
        elif arr[i] == 8:
            res.append("Eight")
        elif arr[i] == 9:
            res.append("Nine")
    return res
