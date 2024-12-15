# Program

def is_valid(s, t):
    for i in range(len(s) - len(t) + 1):
        match = True
        for j in range(len(t)):
            if s[i+j] != '?' and s[i+j] != t[j]:
                match = False
                break
        if match:
            return True
    return False

def restore_string(s, t):
    n = len(s)
    m = len(t)
    for i in range(n-1, -1, -1):
        if s[i] == '?':
            prefix = s[:i]
            suffix = s[i+m:]
            restored_string = prefix + t + suffix
            if is_valid(restored_string, t):
                return restored_string
    return 'UNRESTORABLE'

s = input()
t = input()
print(restore_string(s, t))