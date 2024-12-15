def digitSum(s):
    if s == "":
        return 0
    else:
        return ord(s[0]) + digitSum(s[1:]) if s[0].isupper() else digitSum(s[1:])