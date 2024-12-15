# Taking inputs
N, X, D = map(int, input().split())

# Initialize a dictionary to store the number of sequences for each remainder
remainder_count = {}

# Calculate the sum of original sequence A
total_sum = (2 * X + (N - 1) * D) * N // 2

# If the common difference D is 0, there can be only one possible value of S - T (equal to the sum of the whole sequence)
if D == 0:
    print(1)
    exit()

# For each possible length of sequence taken by Takahashi
for k in range(N+1):
    # Calculate the sum of the taken sequence for given k
    taken_sum = (2 * X + (k - 1) * D) * k // 2
    
    # Calculate the sum of the remaining sequence for given k
    remaining_sum = total_sum - taken_sum
    
    # Calculate the remainder of remaining sequence sum divided by D
    remainder = remaining_sum % D
    
    # Increase the count for the remainder in the dictionary
    remainder_count[remainder] = remainder_count.get(remainder, 0) + 1

# Initialize the count of possible values of S - T
count = 0

# Count the number of possible values of S - T
for value in remainder_count.values():
    count += value * (value - 1) // 2

# Print the count of possible values of S - T
print(count)