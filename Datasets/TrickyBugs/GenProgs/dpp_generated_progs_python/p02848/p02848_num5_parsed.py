N = int(input())
S = input()

result = ''

for char in S:
    if char.isalpha():
        ascii_val = ord(char)
        new_ascii_val = ascii_val + N
        
        if char.isupper():
            if new_ascii_val > ord('Z'):
                new_ascii_val = ord('A') + (new_ascii_val - ord('Z') - 1)
        else:
            if new_ascii_val > ord('z'):
                new_ascii_val = ord('a') + (new_ascii_val - ord('z') - 1)
        
        result += chr(new_ascii_val)
    else:
        result += char

print(result)