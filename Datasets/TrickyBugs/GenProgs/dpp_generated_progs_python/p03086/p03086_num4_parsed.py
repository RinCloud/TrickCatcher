s = input()

acgt_chars = ['A', 'C', 'G', 'T']

max_length = 0
current_length = 0

for char in s:
    if char in acgt_chars:
        current_length += 1
        if current_length > max_length:
            max_length = current_length
    else:
        current_length = 0

print(max_length)