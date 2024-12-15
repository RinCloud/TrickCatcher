# Program

def can_achieve_objective(N, A, B, C, D, S):
    if S[B-1:D].count("##") > 0:
        return "No"
    if C > D:
        if S[A-2:C+1].count("...") == 0:
            return "Yes"
    else:
        if S[A-2:C+1].count("...") == 3:
            return "Yes"
    return "No"

N, A, B, C, D = map(int, input().split())
S = input()

result = can_achieve_objective(N, A, B, C, D, S)
print(result)