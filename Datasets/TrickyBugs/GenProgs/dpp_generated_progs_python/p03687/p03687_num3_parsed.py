def minimum_operations(s):
    count = 0
    while len(set(s)) > 1:
        if s[0] != s[1]:
            s = s[1:]
        else:
            s = s[:-1]
        count += 1
    return count

s = input()
print(minimum_operations(s))