def min_operations(S, K):
    # calculate the length of the string S
    len_S = len(S)
    
    # count the number of adjacent characters that are the same in string S
    count = 0
    for i in range(len_S - 1):
        if S[i] == S[i+1]:
            count += 1
    
    # calculate the minimum number of operations required
    min_ops = count * K
    
    # if the first and last characters in string S are the same, increment the minimum number of operations by 1
    if S[0] == S[len_S-1]:
        min_ops += 1
    
    return min_ops


# input
S = input()
K = int(input())

# output
print(min_operations(S, K))