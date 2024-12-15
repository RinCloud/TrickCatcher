import math

def max_sequence_length(X, Y):
    max_len = 0
    
    for num in range(X, Y+1):
        length = 1
        current_num = num
        
        while current_num <= Y:
            current_num *= 2
            length += 1
        
        max_len = max(max_len, length)
    
    return max_len

X, Y = map(int, input().split())
print(max_sequence_length(X, Y))