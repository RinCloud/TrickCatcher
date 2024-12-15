N = int(input())

# Convert N to a string to easily check for consecutive same digits
N = str(N)

# Check if there are three or more consecutive same digits
if N[0] == N[1] == N[2] or N[1] == N[2] == N[3]:
    print("Yes")
else:
    print("No")