def count_balls(S, T, A, B, U):
    if U == S:
        A -= 1
    elif U == T:
        B -= 1
    return A, B

S, T = input().split()
A, B = map(int, input().split())
U = input().rstrip()

result = count_balls(S, T, A, B, U)
print(result[0], result[1])
