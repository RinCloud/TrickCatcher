def reverse_delete(s, c):
    s = s.lower()
    c = c.lower()
    for i in c:
        s = s.replace(i, "")
    return s, s == s[::-1]