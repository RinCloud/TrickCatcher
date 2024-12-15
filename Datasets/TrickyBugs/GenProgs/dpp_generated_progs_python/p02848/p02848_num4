n = int(input())
s = input()

result = ""
for char in s:
    if char.isalpha():
        ascii_code = ord(char)
        shifted_ascii_code = ascii_code + n

        if char.isupper():
            if shifted_ascii_code > ord("Z"):
                shifted_ascii_code = shifted_ascii_code - ord("Z") + ord("A") - 1
        else:
            if shifted_ascii_code > ord("z"):
                shifted_ascii_code= shifted_ascii_code - ord("z") + ord("a") - 1

        result += chr(shifted_ascii_code)
    else:
        result += char

print(result)