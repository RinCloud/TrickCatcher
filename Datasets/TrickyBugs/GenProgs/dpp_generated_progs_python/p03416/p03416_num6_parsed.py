a, b = map(int, input().split())

def is_palindrome(n):
    return str(n) == str(n)[::-1]

count = 0
for num in range(a, b+1):
    if is_palindrome(num):
        count += 1

print(count)