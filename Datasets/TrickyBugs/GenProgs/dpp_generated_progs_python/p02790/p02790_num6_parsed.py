# Taking input from the user
a, b = map(int, input().split())

# Comparing the two strings and printing the lexicographically smaller one
if str(a) * b <= str(b) * a:
    print(str(a) * b)
else:
    print(str(b) * a)