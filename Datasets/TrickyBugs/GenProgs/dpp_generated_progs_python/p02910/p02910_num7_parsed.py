# Taking input from user
S = input()

# Checking if S is easily playable
odd = ['R', 'U', 'D']
even = ['L', 'U', 'D']
valid = True

for i in range(len(S)):
    if (i+1) % 2 == 0 and S[i] not in even:
        valid = False
    elif (i+1) % 2 != 0 and S[i] not in odd:
        valid = False

# Printing the result
if valid:
    print("Yes")
else:
    print("No")