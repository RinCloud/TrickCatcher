# Program

def can_sort_sequence(N, p):
    sorted_p = sorted(p)
    if p == sorted_p:
        return 'YES'
    for i in range(N):
        for j in range(i+1, N):
            p_i = p[i]
            p_j = p[j]
            p[i] = p_j
            p[j] = p_i
            if p == sorted_p:
                return 'YES'
            p[i] = p_i
            p[j] = p_j
    return 'NO'

# Get input values
N = int(input())
p = list(map(int, input().split()))

# Output the result
print(can_sort_sequence(N, p))