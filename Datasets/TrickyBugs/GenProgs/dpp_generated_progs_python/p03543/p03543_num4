# Program to check if a number is "good"

# Function to check if a number is "good"
def is_good(number):
    number = str(number)  # convert number to string for easier manipulation
    for i in range(len(number)-2):  # loop through the digits of the number
        if number[i] == number[i+1] == number[i+2]:  # check if three consecutive digits are same
            return True  # number is "good"
    return False  # number is not "good"


# Get input from user
N = int(input())

# Check if N is "good" and print the result
if is_good(N):
    print("Yes")
else:
    print("No")