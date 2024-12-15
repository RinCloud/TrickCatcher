# Program to determine if a sequence exists that satisfies the given conditions

def construct_sequence(N, A, B):
    if (A > N or B > N or A*B < N or A == 1 and N > 1 or B == 1 and N > 1):
        return -1

    sequence = [0] * N

    increasing_subsequence = list(range(1, A+1))
    decreasing_subsequence = list(range(N, N-B, -1))

    remaining = N - (len(increasing_subsequence) + len(decreasing_subsequence))

    j = 0
    for i in range(A, A+remaining):
        increasing_subsequence.append(i+1)
    
    for i in range(N-B+1, N+1):
        decreasing_subsequence.append(i-1)
    
    for i in range(N):
        if i < A:
            sequence[i] = increasing_subsequence.pop()
        elif i >= N-B:
            sequence[i] = decreasing_subsequence.pop()
        else:
            sequence[i] = remaining+j+1
            j+=1
    
    return sequence

# Reading input from Standard Input
N, A, B = map(int, input().split())

# Constructing the sequence
sequence = construct_sequence(N, A, B)

# Printing the sequence
if sequence == -1:
    print(-1)
else:
    print(*sequence)