def digitSum(s):
    sum_upper = 0
    for char in s:
        if char.isupper():
            sum_upper += ord(char)
    return sum_upper