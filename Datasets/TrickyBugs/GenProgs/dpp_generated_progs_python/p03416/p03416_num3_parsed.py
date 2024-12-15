import sys

def is_palindrome(n):
    return str(n) == str(n)[::-1]

A, B = map(int, sys.stdin.readline().split())

count = 0
for i in range(A, B+1):
    if is_palindrome(i):
        count += 1

print(count)