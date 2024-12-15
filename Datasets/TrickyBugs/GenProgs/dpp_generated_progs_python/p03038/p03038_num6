N, M = map(int, input().split())
A = list(map(int, input().split()))

ops = []
for _ in range(M):
    B, C = map(int, input().split())
    ops.append((B, C))

A.sort()

op_idx = 0
for i in range(N):
    if op_idx < M and ops[op_idx][0] >= N - i:
        break
    A[i] = max(A[i], ops[op_idx][1])
    ops[op_idx] = (ops[op_idx][0] - 1, ops[op_idx][1])
    if ops[op_idx][0] == 0:
        op_idx += 1

print(sum(A))