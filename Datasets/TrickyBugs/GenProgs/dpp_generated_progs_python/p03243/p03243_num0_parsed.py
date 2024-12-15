# program to find the earliest ABC where Kurohashi can make his debut

# get the input N
N = int(input())

# define a function to check if all digits of a number are the same
def all_digits_same(n):
    # convert the number to string
    str_n = str(n)
    # get the first digit
    first_digit = int(str_n[0])
    # check if all digits are the same as the first digit
    for digit in str_n:
        if int(digit) != first_digit:
            return False
    return True

# find the earliest ABC where Kurohashi can make his debut
while True:
    if all_digits_same(N):
        print(N)
        break
    else:
        N += 1