def infinity_string(S, K):
    curr_string = S
    n = len(curr_string)
    
    # find the total length of the string after 5 * 10^15 days
    total_length = 0
    for i in range(n):
        if curr_string[i] == '1':
            total_length += 1
        else:
            total_length += int(curr_string[i]) - 1
    
    # if K is greater than total_length, return '-1'
    if K > total_length:
        return "-1"
    
    # repeat the process until total_length >= K
    while total_length >= K:
        # iterate through the string
        new_string = ""
        for i in range(n):
            if curr_string[i] == '1':
                new_string += '1'
                total_length -= 1
            else:
                # convert each digit to the appropriate number of times
                new_string += curr_string[i] * (int(curr_string[i])-1)
                total_length -= int(curr_string[i]) - 1
        curr_string = new_string
    
    # return the K-th character from the left
    return curr_string[K-1]

# read input values
S = input().strip()
K = int(input().strip())

# call the function and print the result
print(infinity_string(S, K))