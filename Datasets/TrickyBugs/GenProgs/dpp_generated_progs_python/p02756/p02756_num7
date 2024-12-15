# Taking input values
S = input()
Q = int(input())

# Performing operations
for _ in range(Q):
    query = input().split()

    if query[0] == '1':
        S = S[::-1]
    else:
        if query[1] == '1':
            S = query[2] + S
        else:
            S = S + query[2]

# Printing the final string
print(S)