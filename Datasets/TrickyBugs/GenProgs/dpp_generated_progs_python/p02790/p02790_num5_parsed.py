# Taking input from the user
a, b = map(int, input().split())

# Generating the strings with the given digits
string_a = str(a) * b
string_b = str(b) * a

# Checking which string is lexicographically smaller
if string_a < string_b:
    print(string_a)
else:
    print(string_b)