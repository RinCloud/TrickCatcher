def reverse_delete(s,c):
    s = s.lower()
    c = c.lower()
    s_filtered = ''.join([char for char in s if char not in c])
    return s_filtered, s_filtered == s_filtered[::-1]