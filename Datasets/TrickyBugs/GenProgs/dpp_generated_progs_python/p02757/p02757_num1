# Here is one way to implement the solution:

def count_substrings(n, p, s):
    count = 0
    for i in range(n):
        num = 0
        for j in range(i, n):
            num = num * 10 + int(s[j])
            if num % p == 0:
                count += 1
    return count

n, p = map(int, input().split())
s = input()
result = count_substrings(n, p, s)
print(result)