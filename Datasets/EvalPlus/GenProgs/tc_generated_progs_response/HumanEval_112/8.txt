def reverse_delete(s,c):
    s = s.lower()
    c = c.lower()
    new_s = ""
    for i in s:
        if i not in c:
            new_s += i
    return new_s, new_s == new_s[::-1]