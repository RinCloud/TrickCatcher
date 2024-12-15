a, b, c = map(int, input().split())

# Calculate the difference of cookies between 2 people
e = (a - b) | (b - c)

# Binary representation of `e` contains the information about the number of times the action needs to be repeated
binary_repr = bin(e & -e)[2:]

# Calculate the number of times the action needs to be repeated
num_repeats = len(binary_repr) - 1

# If the difference of cookies is same for 2 people and the third person has odd number of cookies
# then the action cannot be repeated finite times
if e == b & 1:
    num_repeats -= 1
    if num_repeats == 0:
        num_repeats = -1

print(num_repeats)
