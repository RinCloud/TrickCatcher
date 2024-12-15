# Taking input from the user
N = int(input())

# Creating an empty list to store the sequence
sequence = []

# Taking input of the sequence
for _ in range(N):
    num = int(input())
    sequence.append(num)

# Finding the maximum value for each element in the sequence
for i in range(N):
    max_val = max(sequence[:i] + sequence[i+1:])
    print(max_val)