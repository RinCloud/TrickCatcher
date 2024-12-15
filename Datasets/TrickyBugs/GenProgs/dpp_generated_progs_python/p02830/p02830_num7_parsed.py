# Taking input from user
N = int(input())
S, T = input().split()

# Initializing an empty string to store the new string formed
new_string = ''

# Looping through each index of the strings
for i in range(N):
    # Appending characters from S and T to the new string
    new_string += S[i] + T[i]
    
# Printing the new string formed
print(new_string)