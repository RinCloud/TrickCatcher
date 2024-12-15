def reverse_delete(s, c):
    result = ""
    for ch in s:
        if ch not in c:
            result += ch
    return (result, result == result[::-1])