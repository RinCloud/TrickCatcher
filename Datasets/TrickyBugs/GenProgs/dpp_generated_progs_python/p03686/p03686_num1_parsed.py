N, M = map(int, input().split())
chairs = [0] * (M + 2)
for _ in range(N):
    L, R = map(int, input().split())
    chairs[L] += 1
    chairs[R] -= 1

cumulative = chairs.copy()
for i in range(1, M + 2):
    cumulative[i] += cumulative[i - 1]

additional_chairs = sum([1 for c in cumulative if c == 0])
print(additional_chairs)