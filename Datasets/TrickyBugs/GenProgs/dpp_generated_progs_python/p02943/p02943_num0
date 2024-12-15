def reverse_concatenate(S):
    T = S[::-1]
    U = S + T
    return U

def find_smallest_string(S, N, K):
    U = reverse_concatenate(S)
    smallest_string = S
    for i in range(K):
        substring = U[i:i+N]
        if substring < smallest_string:
            smallest_string = substring
    return smallest_string

N, K = map(int, input().split())
S = input()

result = find_smallest_string(S, N, K)
print(result)