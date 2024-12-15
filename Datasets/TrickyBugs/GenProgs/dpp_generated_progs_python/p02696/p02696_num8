# Program:

A, B, N = map(int, input().split())

max_val = -1
for x in range(N+1):
    val = ((A*x) // B) - A * (x // B)
    if val > max_val:
        max_val = val

print(max_val)