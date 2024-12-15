def smallest_change(arr):
    if not arr:
        return 0
    first_occurrence = {}
    for i in range(len(arr)):
        if arr[i] not in first_occurrence:
            first_occurrence[arr[i]] = i
    num_changes = 0
    for i in range(len(arr) // 2):
        if arr[i] != arr[len(arr) - 1 - i]:
            if arr[i] in first_occurrence and first_occurrence[arr[i]] == len(arr) - 1 - i:
                num_changes += 1
                del first_occurrence[arr[i]]
            else:
                if arr[i] in first_occurrence:
                    num_changes += 1
                    del first_occurrence[arr[i]]
                else:
                    num_changes += 2
    return num_changes