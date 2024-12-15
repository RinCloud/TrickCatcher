N, A, B = map(int, input().split())

if N <= A + B:
    print(N // (A + B) * A + min(N % (A + B), A))
else:
    print(A * (N // (A + B)))