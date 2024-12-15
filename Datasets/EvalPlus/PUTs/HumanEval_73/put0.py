
def smallest_change(arr):
    """
    Given an array arr of integers, find the minimum number of elements that
    need to be changed to make the array palindromic. A palindromic array is an array that
    is read the same backwards and forwards. In one change, you can change one element to any other element.

    For example:
    smallest_change([1,2,3,5,4,7,9,6]) == 4
    smallest_change([1, 2, 3, 4, 3, 2, 2]) == 1
    smallest_change([1, 2, 3, 2, 1]) == 0
    """
    if not arr:
        return 0

    # Find the first occurrence of each element in the array
    first_occurrence = {}
    for i in range(len(arr)):
        if arr[i] not in first_occurrence:
            first_occurrence[arr[i]] = i

    # Find the number of elements that need to be changed
    num_changes = 0
    for i in range(len(arr) // 2):
        if arr[i] != arr[len(arr) - 1 - i]:
            if arr[i] in first_occurrence and first_occurrence[arr[i]] == len(arr) - 1 - i:
                # The element is already at the correct position
                num_changes += 1
                del first_occurrence[arr[i]]
            else:
                # The element is not at the correct position
                if arr[i] in first_occurrence:
                    num_changes += 1
                    del first_occurrence[arr[i]]
                else:
                    num_changes += 2

    return num_changes

