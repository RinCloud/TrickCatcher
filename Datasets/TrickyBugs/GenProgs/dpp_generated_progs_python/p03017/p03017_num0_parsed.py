def is_possible(N, A, B, C, D, S):
    # Check if any rock is blocking the path between A and C
    for i in range(A+1, C):
        if S[i-1] == '#' and S[i] == '#':
            return 'No'
    
    # Check if any rock is blocking the path between B and D
    for i in range(B+1, D):
        if S[i-1] == '#' and S[i] == '#':
            return 'No'
    
    # Check if A can reach C
    if C > D and C < B:
        return 'No'
    
    # Check if B can reach D
    if D > C and D < A:
        return 'No'
    
    return 'Yes'


# Read input
N, A, B, C, D = map(int, input().split())
S = input()

# Call the function and print the result
result = is_possible(N, A, B, C, D, S)
print(result)