# Implementation of the program

# Read input string s
s = input()

# Initialize variable to count number of operations
operations = 0

# Loop until all characters in s are the same
while len(set(s)) > 1:
    new_s = ""
    N = len(s)
    i = 0

    # Update new_s by applying the transformation rule
    while i < N - 1:
        if s[i] == s[i+1]:
            new_s += s[i]
        else:
            new_s += s[i+1]
            i += 1
        i += 1
    
    s = new_s
    operations += 1

# Print the minimum necessary number of operations
print(operations)