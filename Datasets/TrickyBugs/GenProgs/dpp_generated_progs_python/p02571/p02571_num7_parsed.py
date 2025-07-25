def min_chars_change(s, t):
    min_change = len(s)
    
    for i in range(len(s) - len(t) + 1):
        change_count = 0
        
        for j in range(len(t)):
            if s[i+j] != t[j]:
                change_count += 1
        
        min_change = min(min_change, change_count)
    
    return min_change

# Getting input from the user
s = input()
t = input()

# Getting the minimum number of characters that need to be changed
result = min_chars_change(s, t)

# Printing the result
print(result)
