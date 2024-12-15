def pluck(arr):
    even_values = []
    for index, num in enumerate(arr):
        if num % 2 == 0:
            even_values.append((num, index))
    if even_values:
        even_values.sort()
        return [even_values[0][0], even_values[0][1]]
    else:
        return []