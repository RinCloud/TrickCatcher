# Program:

N = int(input())
S = input()

alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
result = ''

for char in S:
    shifted_index = (alphabet.index(char) + N) % len(alphabet)
    result += alphabet[shifted_index]

print(result)