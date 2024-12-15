# Program to find the integer between 1 and N (inclusive) that can be divided by 2 for the most number of times

# Read the input value of N
N = int(input())

# Initialize the result variable as N
result = N

# Iterate through each number starting from N down to 1
for i in range(N, 0, -1):
    # Count the number of times the current number can be divided by 2
    count = 0
    while i % 2 == 0:
        i = i // 2
        count += 1
    
    # Check if the current number has more divisions than the previous result
    if count > result:
        result = count

# Print the final result
print(result)