def smallest_string(N, K, S):
    T = S[::-1]
    U = S + T

    operations = K % 2 * N
    lex_smallest = min(S[i:i+N] for i in range(len(U)-N+1))
    return lex_smallest

N, K = map(int, input().split())
S = input().strip()

result = smallest_string(N, K, S)
print(result)