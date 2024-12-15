def count_divisible_substrings(n, p, s):
    count = 0
    for i in range(n):
        for j in range(i, n):
            substring = s[i:j + 1]
            if int(substring) % p == 0:
                count += 1
    return count

n, p = map(int, input().split())
s = input()

result = count_divisible_substrings(n, p, s)
print(result)