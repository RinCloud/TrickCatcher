"""
# Getting input
w = input()

# Defining a function to check if the string is beautiful
def is_beautiful(string):
    # Creating a dictionary to store the count of each letter
    count = {}
    
    # Counting the occurrences of each letter
    for letter in string:
        if letter in count:
            count[letter] += 1
        else:
            count[letter] = 1
    
    # Checking if each letter occurs even number of times
    for value in count.values():
        if value % 2 != 0:
            return False
    
    return True

# Checking if w is beautiful and printing the result
if is_beautiful(w):
    print("Yes")
else:
    print("No")
"""