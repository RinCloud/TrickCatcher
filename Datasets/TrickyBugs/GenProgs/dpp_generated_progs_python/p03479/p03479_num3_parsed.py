# Taking input
X, Y = map(int, input().split())

# Initialize the maximum length of the sequence
max_length = 0

# Check each multiple of X starting from X itself
for i in range(X, Y+1, X):
    num = i
    length = 1
    
    # Generate the sequence by multiplying each subsequent element by the previous element
    while num <= Y//X * X:
        num *= X
        length += 1
    
    # Update the maximum sequence length if the current length is greater
    max_length = max(max_length, length)

print(max_length)