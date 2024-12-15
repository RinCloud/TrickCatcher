# Program

N, A, B = map(int, input().split())

if A == B:
    print(1)
else:
    print(B * (N - 2) - A * (N - 2) + 1)