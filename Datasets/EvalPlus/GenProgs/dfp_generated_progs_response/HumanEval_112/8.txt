def reverse_delete(s,c):
    res = ""
    for ch in s:
        if ch not in c:
            res += ch
    return (res, res == res[::-1])