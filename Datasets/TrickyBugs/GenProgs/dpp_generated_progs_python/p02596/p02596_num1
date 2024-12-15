def find_multiple_position(K):
    current_number = 7
    position = 1
    
    while current_number % K != 0:
        current_number = current_number * 10 + 7
        position += 1
        
        if current_number // K >= 10**6:
            return -1
    
    return position

K = int(input())
print(find_multiple_position(K))