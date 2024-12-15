# program:

N = int(input().rstrip())
A = []
B = []
candy_count = 0

for _ in range(N):
    a, b = map(int, input().rstrip().split())
    A.append(a)
    B.append(b)
    candy_count += a

min_candy_count = candy_count

for i in range(N):
    candy_count -= A[i]
    if A[i] > B[i]:
        min_candy_count = min(min_candy_count, B[i])
    elif A[i] == B[i]:
        min_candy_count = min(min_candy_count, A[i])

print(candy_count - min_candy_count)