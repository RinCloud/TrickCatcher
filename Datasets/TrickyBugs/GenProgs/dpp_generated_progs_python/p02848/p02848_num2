N = int(input())
S = input()

def shift_char(char, n):
    start = ord('A')
    end = ord('Z')

    shifted_char = (ord(char) - start + n) % (end - start + 1)

    return chr(shifted_char + start)

result = ''.join([shift_char(char, N) for char in S])
print(result)