# Program

def max_cubes_removed(s):
    n = len(s)
    max_removed = 0
    for i in range(n-1):
        if s[i] != s[i+1]:
            max_removed += 1
    return max_removed

s = input()
print(max_cubes_removed(s))