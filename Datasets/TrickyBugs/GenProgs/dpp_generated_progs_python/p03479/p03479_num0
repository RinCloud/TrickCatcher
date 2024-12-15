import math

def find_sequence_length(X, Y):
    length = 1
    while X * (2 ** length) <= Y:
        length += 1
    return length

X, Y = map(int, input().split())
print(find_sequence_length(X, Y))