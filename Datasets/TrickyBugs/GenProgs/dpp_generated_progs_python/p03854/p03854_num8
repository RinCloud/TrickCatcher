def is_possible(S):
    # Check if S is divisible by the words 'dream', 'dreamer', 'erase' and 'eraser'
    while len(S) > 0:
        if S.endswith('dream'):
            S = S[:-5]
        elif S.endswith('dreamer'):
            S = S[:-7]
        elif S.endswith('erase'):
            S = S[:-5]
        elif S.endswith('eraser'):
            S = S[:-6]
        else:
            return 'NO'
    
    return 'YES'


# Get input
S = input().strip()

# Check if it is possible to obtain S = T
result = is_possible(S)

# Print the result
print(result)