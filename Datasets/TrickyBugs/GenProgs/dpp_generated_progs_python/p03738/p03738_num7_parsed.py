import sys

def compare_magnitudes(A, B):
    if A > B:
        return "GREATER"
    elif A < B:
        return "LESS"
    else:
        return "EQUAL"

A = int(sys.stdin.readline())
B = int(sys.stdin.readline())

result = compare_magnitudes(A, B)
print(result)