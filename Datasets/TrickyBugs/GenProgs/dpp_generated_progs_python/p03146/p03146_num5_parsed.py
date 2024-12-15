s = int(input())

# Function to calculate the next term in the sequence
def next_term(n):
    if n % 2 == 0:
        return n // 2
    else:
        return 3 * n + 1

# Initialize the sequence with the first term
a = [s]

# Generate the sequence until a duplicate term is found
while True:
    next_num = next_term(a[-1])
    if next_num in a:
        break
    a.append(next_num)

# Find the index of the first occurrence of the duplicate term
m = a.index(next_num) + 1

print(m)