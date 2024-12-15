# Taking input
N = int(input())
A = list(map(int, input().split()))

# Sorting the array in descending order
A.sort(reverse=True)

# Initializing total happiness points to 0
total_happiness = 0

# Calculating happiness points
for i in range(N):
    total_happiness += A[i] * (N-i-1)

# Printing the maximum total happiness points
print(total_happiness)