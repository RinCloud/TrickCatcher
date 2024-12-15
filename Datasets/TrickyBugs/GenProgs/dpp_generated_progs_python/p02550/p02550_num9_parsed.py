# Function to calculate the remainder of x divided by m
def f(x, m):
  return x % m

# Read the input values
N, X, M = map(int, input().split())

# Initialize the sequence with the initial value A_1
A = [X]

# Calculate the sequence A
for i in range(1, N):
  A.append(f(A[i-1]**2, M))

# Calculate the sum of the sequence A
sum_A = sum(A)

# Print the sum of the sequence A
print(sum_A)