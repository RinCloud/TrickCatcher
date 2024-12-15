def min_operations(s):
    count = 0
    while len(set(s)) > 1:
        s_new = ""
        for i in range(len(s)-1):
            if s[i] == s[i+1]:
                s_new += s[i]
            else:
                s_new += s[i+1]
        s = s_new
        count += 1
        
    return count

s = input()
result = min_operations(s)
print(result)
