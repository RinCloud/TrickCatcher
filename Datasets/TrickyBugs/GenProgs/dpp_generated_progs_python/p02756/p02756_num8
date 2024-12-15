# Program:

## Read input values
S = input()
Q = int(input())

# Initialize the final string
final_string = S

# Iterate through each query
for _ in range(Q):
    query = input().split() # read the query elements

    # check the type of query
    if query[0] == '1':
        # reverse the string
        final_string = final_string[::-1]
    else:
        # add character to the string based on the condition provided
        F_i = int(query[1])
        C_i = query[2]
        if F_i == 1:
            final_string = C_i + final_string
        else:
            final_string = final_string + C_i

# print the final string
print(final_string)