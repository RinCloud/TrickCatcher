def calculate_chocolate_pieces(N, D, X, A):
    count = X
    for i in range(N):
        count += (D-1) // A[i] + 1
    return count

N = int(input())
D, X = map(int, input().split())
A = []
for i in range(N):
    A.append(int(input()))

result = calculate_chocolate_pieces(N, D, X, A)
print(result)