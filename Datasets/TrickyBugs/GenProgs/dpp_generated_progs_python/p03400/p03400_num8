def find_number_of_chocolates(N, D, X, A):
    chocolates_remaining = X
    for i in range(N):
        day = 0
        while day < D:
            chocolates_remaining -= 1
            day += A[i] + 1
    return X - chocolates_remaining

N = int(input())
D, X = map(int, input().split())
A = []
for _ in range(N):
    A.append(int(input()))

result = find_number_of_chocolates(N, D, X, A)
print(result)