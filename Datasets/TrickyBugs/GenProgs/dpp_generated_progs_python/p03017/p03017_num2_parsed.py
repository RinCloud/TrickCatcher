def can_achieve_objective(N, A, B, C, D, S):
    # If the destination positions are already occupied by rocks, return 'No'
    if S[C-1] == '#' or S[D-1] == '#':
        return 'No'

    # If C is before D and there is no rock between C and D in consecutive squares, return 'Yes'
    if C < D and '#' not in S[C-1:D-1]:
        return 'Yes'

    # If D is before C and there is no rock between D and C in consecutive squares, return 'Yes'
    if D < C and '#' not in S[D-1:C-1]:
        return 'Yes'

    # If there is a rock between A and B, or B and A, or C and B or D and C, return 'No'
    if '#' in S[A-1:B-1] or '#' in S[B-1:A-1] or '#' in S[C-1:B-1] or '#' in S[D-1:C-1]:
        return 'No'
    
    return 'Yes'

N, A, B, C, D = map(int, input().split())
S = input()

print(can_achieve_objective(N, A, B, C, D, S))