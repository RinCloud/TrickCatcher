s = input()
t = input()

# Find the maximum value of i
max_i = -1

# Check if the number of i is finite
finite_i = True

# Loop through all possible values of i from 0 to s.length() // t.length()
for i in range(len(s) // len(t) + 1):
    # Concatenate i copies of t
    substring = t * i
    
    # Check if the concatenated substring is a substring of s
    if substring in s:
        # Update the maximum value of i
        max_i = i
    
    # If the substring is not in s for any value of i, the number of i is infinite
    else:
        finite_i = False

# Print the maximum value of i if it is finite, otherwise print -1
if finite_i:
    print(max_i)
else:
    print(-1)