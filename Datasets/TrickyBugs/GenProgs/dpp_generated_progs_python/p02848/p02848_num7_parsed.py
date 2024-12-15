N = int(input())
S = input()

shifted_string = ''
for c in S:
    ascii_value = ord(c) + N
    if ascii_value > ord('Z'):
        ascii_value -= 26
    shifted_string += chr(ascii_value)

print(shifted_string)