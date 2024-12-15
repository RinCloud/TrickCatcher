# Initialize a flag variable
found = False

# Iterate over all possible values of the first integer from 1 to 9
for i in range(1, 10):
    # Check if N is divisible by the current integer
    if N % i == 0:
        # Check if the second integer is between 1 and 9 (inclusive)
        if 1 <= N // i <= 9:
            # Update the flag variable
            found = True
            # Break out of the loop as we have found a valid pair
            break

# Check the value of the flag variable to determine the output
if found:
    print("Yes")
else:
    print("No")
