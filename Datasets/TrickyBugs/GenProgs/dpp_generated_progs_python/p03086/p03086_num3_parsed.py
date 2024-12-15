'''
#Approach:
1. Initialize two variables max_len and curr_len to 0.
2. Iterate through each character in the given string S.
3. If the current character is 'A' or 'C' or 'G' or 'T', increment the current length by 1.
4. If the current length is greater than the maximum length, update the maximum length to the current length.
5. If the current character is not 'A' or 'C' or 'G' or 'T', reset the current length to 0.
6. Finally, print the maximum length.

#Program:

S = input() #Reading the input string

max_len = 0 #Initializing maximum length to 0
curr_len = 0 #Initializing current length to 0

for char in S: #Iterating through each character in the string
    if char in {'A', 'C', 'G', 'T'}: #Checking if the character is 'A' or 'C' or 'G' or 'T'
        curr_len += 1 #Incrementing the current length by 1
        
        if curr_len > max_len: #Checking if the current length is greater than the maximum length
            max_len = curr_len #Updating the maximum length to the current length
    else:
        curr_len = 0 #Resetting the current length to 0
    
print(max_len) #Printing the maximum length
'''