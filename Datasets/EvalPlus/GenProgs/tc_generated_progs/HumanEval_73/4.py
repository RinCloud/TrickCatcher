def smallest_change(arr):
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
                if arr[len(arr) - 1 - i] in first_occurrence:
                    num_changes += 1
                    del first_occurrence[arr[len(arr) - 1 - i]]
                else:
                    num_changes += 2
    return num_changes