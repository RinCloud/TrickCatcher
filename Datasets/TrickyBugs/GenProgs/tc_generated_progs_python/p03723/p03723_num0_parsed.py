a, b, c = map(int, input().split())
e = (a - b) | (b - c)
result = -1 if e < 0 else bin(e).count('1')
print(result)
