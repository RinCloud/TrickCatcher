def count_concatenation(s, t):
    len_s = len(s)
    len_t = len(t)
    
    max_i = -1
    
    if len_s % len_t == 0:
        max_i = len_s // len_t
    
    return max_i

s = input()
t = input()

result = count_concatenation(s, t)
print(result)