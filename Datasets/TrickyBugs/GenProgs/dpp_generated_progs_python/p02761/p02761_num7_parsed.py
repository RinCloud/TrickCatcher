# First, let's get the input
N, M = map(int, input().split())

# create a list of length N initialized with -1
digits = [-1] * N

# loop through the number of conditions
for _ in range(M):
    # get the position and digit from the input
    s, c = map(int, input().split())
    # subtract 1 from the position to match the index
    s -= 1
    # check if the digit is valid
    if digits[s] != -1 and digits[s] != c:
        # if the digit is not valid, print -1 and exit
        print(-1)
        exit()
    # assign the digit to the position
    digits[s] = c

# check if the first digit is 0 and the number has more than 1 digit
if digits[0] == 0 and N > 1:
    print(-1)
else:
    # create a string representation of the digits
    result = "".join(str(d) if d != -1 else "0" for d in digits)
    # print the result
    print(result)