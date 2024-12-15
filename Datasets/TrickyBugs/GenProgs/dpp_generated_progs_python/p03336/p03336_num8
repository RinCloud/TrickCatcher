# Reading input values
n, m, k = map(int, input().split())
x = input()
y = input()

# Converting binary strings to integers
x_value = int(x, 2)
y_value = int(y, 2)

# Performing the bitwise AND operation and adding the result to both x and y values
for _ in range(k):
    z = x_value & y_value
    x_value += z
    y_value += z

# Converting the updated x and y values to binary strings
x_bin = bin(x_value)[2:].zfill(n)
y_bin = bin(y_value)[2:].zfill(m)

# Printing the final x and y values in binary
print(x_bin)
print(y_bin)