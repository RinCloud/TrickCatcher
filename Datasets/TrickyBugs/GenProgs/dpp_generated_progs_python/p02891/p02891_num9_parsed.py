def min_operations(S, K):
    length = len(S)
    count = 0
    
    # If K is 1, then no operations needed
    if K == 1:
        return count
    
    # Check if all characters in S are the same
    if all(x == S[0] for x in S):
        # If all characters are the same, then only need to change the first character of each copy of S in T
        return length // 2
    
    # Count the number of character pairs that need to be changed
    for i in range(1, length):
        if S[i-1] == S[i]:
            count += 1

    # Calculate the number of additional changes needed to make all adjacent characters different
    additional_changes = (K - 1) * count
    
    # Return the total number of operations needed
    return count + additional_changes

S = input()
K = int(input())

result = min_operations(S, K)
print(result)