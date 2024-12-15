import math

def lexicographically_smallest_sequence(K, N):
    X = 2**(K*N)
    middle_index = math.ceil(X/2)
    sequence = []
    
    for i in range(N):
        sequence.append(1)
    
    index = N-1
    
    while middle_index > 1 and index >= 0:
        if sequence[index] < K:
            sequence[index] += 1
            middle_index -= 1
        else:
            index -= 1
    
    return sequence

K, N = map(int, input().split())
sequence = lexicographically_smallest_sequence(K, N)
print(' '.join(map(str, sequence)))