def kth_character(s, k):
    length = len(s)
    curr_index = 0
    curr_char = s[curr_index]
    
    while curr_index < length:
        if curr_char == '1':
            curr_index += 1
            if curr_index == k:
                return curr_char
        else:
            count = int(curr_char)
            curr_index += count

            if curr_index >= k:
                remaining_index = k - (curr_index - count)
                return str(remaining_index)
        
        curr_char = s[curr_index]

s = input()
k = int(input())

print(kth_character(s, k))