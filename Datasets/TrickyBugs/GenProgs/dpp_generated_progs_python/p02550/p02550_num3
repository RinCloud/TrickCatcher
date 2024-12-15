N, X, M = map(int, input().split())

# Function to calculate the remainder of Euclidean division of x by m
def f(x, m):
    return x % m

# Calculate the sequence A
A = [X]
for i in range(1, N):
    next_value = f(A[i-1]**2, M)
    if next_value in A:
        cycle_start = A.index(next_value)
        cycle_length = len(A) - cycle_start
        total_cycles = (N - cycle_start) // cycle_length
        remaining_steps = (N - cycle_start) % cycle_length
        A = A[cycle_start:cycle_start+cycle_length]
        A = A * total_cycles + A[:remaining_steps]
        break
    else:
        A.append(next_value)

# Calculate the sum of A
sum_A = sum(A)

print(sum_A)