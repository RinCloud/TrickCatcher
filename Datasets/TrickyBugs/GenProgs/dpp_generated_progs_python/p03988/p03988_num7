'''
import sys
from collections import Counter

def construct_tree(N, a):
    max_ai = max(a)
    freq = Counter(a).values()
    if max_ai == N-1 and 1 <= min(freq) <= 2:
        return "Possible"
    return "Impossible"

# Read input from standard input
input_lines = sys.stdin.read().strip().split('\n')
N = int(input_lines[0])
a = list(map(int, input_lines[1].split()))

# Call the function and print the result
result = construct_tree(N, a)
print(result)
'''