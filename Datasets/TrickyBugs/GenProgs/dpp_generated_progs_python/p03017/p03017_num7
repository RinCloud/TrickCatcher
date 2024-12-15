# Program

def is_achievable(N, A, B, C, D, S):
    for i in range(B, D):
        # If B and C are consecutive and both are empty squares, return 'Yes'
        if S[i - 1] == '.' and S[i] == '.' and S[i + 1] == '.':
            return 'Yes'

    # If C and D are consecutive and both are empty squares, return 'Yes'
    if S[C - 1] == '.' and S[C] == '.' and S[D] == '.':
        return 'Yes'

    return 'No'


# Read input values
N, A, B, C, D = map(int, input().split())
S = input()

# Call function and print result
print(is_achievable(N, A, B, C, D, S))