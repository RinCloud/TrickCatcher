def can_achieve_objective(N, A, B, C, D, S):
    # Check if there is an obstacle between A and C
    if "#" in S[A-1:C]:
        return "No"
    
    # Check if there is an obstacle between B and D
    if "#" in S[B-1:D]:
        return "No"
    
    # Check if there is a rock exactly in D+1 and all squares after D+1 are empty
    if D < N and S[D] == "#" and "#" in S[D+1:]:
        return "No"
    
    # Check if there is a rock exactly in C+1 and all squares between A and C are empty
    if A <= C-2 and S[C-2] == "#" and "#" in S[A-1:C-2]:
        return "No"
    
    return "Yes"

# Read input
N, A, B, C, D = map(int, input().split())
S = input().strip()

# Call the function and print the result
result = can_achieve_objective(N, A, B, C, D, S)
print(result)
