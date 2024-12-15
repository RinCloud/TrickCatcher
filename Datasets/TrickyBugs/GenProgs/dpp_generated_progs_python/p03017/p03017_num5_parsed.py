# Program

def is_achievable(N, A, B, C, D, S):
    # Check if there is a rock between Snuke and Fnuke
    for i in range(B - 1, D - 1):
        if S[i] == '#' and S[i + 1] == '#':
            return "No"
    
    # Check if Snuke can reach C before Fnuke reaches D
    if C < D:
        for i in range(B - 2, D - 2):
            if S[i] == '.' and S[i + 1] == '.':
                return "Yes"
    else:
        for i in range(B - 2, C - 2):
            if S[i] == '.' and S[i + 1] == '.':
                return "Yes"
    
    return "No"


# Read input from stdin
N, A, B, C, D = map(int, input().split())
S = input()

# Call the function and print the result
result = is_achievable(N, A, B, C, D, S)
print(result)