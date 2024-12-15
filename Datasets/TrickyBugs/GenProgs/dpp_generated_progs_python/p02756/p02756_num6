# Getting the input
S = input()
Q = int(input())

# Initializing the string
result = S

# Performing the operations
for _ in range(Q):
    query = input().split()
    if query[0] == '1':
        result = result[::-1]
    else:
        F_i = int(query[1])
        C_i = query[2]
        if F_i == 1:
            result = C_i + result
        else:
            result = result + C_i

# Printing the final string
print(result)