def min_tiles_to_repaint(s):
    count = 0
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            count += 1
    return count

s = input().strip()
print(min_tiles_to_repaint(s))
