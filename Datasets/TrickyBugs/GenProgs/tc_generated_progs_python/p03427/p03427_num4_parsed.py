N = input()
s = sum(map(int, N))
if len(N) > 1:
    s -= 1
print(s)
