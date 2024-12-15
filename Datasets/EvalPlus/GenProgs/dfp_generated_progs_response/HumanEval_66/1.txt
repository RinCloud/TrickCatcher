def digitSum(s):
    sum_ascii = 0
    for char in s:
        if char.isupper():
            sum_ascii += ord(char)
    return sum_ascii