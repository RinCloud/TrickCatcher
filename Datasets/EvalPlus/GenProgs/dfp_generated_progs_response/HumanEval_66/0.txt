def digitSum(s):
    sum = 0
    for ch in s:
        if ch.isupper():
            sum += ord(ch)
    return sum