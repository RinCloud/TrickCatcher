def find_max_i(s, t):
    if t in s:
        return -1
    
    max_i = 0
    for i in range(len(s)):
        if s[i] == t[0]:
            count = 1
            for j in range(1, len(t)):
                if s[(i + count) % len(s)] == t[j]:
                    count += 1
                    if count == len(t):
                        max_i = max(max_i, i+1)
                        break
                else:
                    break
    
    return max_i

s = input()
t = input()

result = find_max_i(s, t)
print(result)