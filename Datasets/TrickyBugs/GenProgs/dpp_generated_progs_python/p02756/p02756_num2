# Program:

# Take input
S = input()
Q = int(input())

# Perform operations on string S
for _ in range(Q):
    query = input().split()
    Ti = int(query[0])
    
    if Ti == 1:
        S = S[::-1]
    elif Ti == 2:
        Fi = int(query[1])
        Ci = query[2]
        
        if Fi == 1:
            S = Ci + S
        elif Fi == 2:
            S = S + Ci

# Print the final string
print(S)