# Program

def can_jump(N, A, B, C, D, S):
    # Check if there are any rocks between A and C
    for i in range(A, C):
        if S[i-1] == '#':
            return "No"
    
    # Check if there are any rocks between B and D
    for i in range(B, D):
        if S[i-1] == '#':
            return "No"
    
    # Check if Snuke is always ahead of Fnuke
    if B < C and D < C:
        return "Yes"
    else:
        return "No"

# Read input
N, A, B, C, D = map(int, input().split())
S = input()

# Call the function and print the result
print(can_jump(N, A, B, C, D, S))