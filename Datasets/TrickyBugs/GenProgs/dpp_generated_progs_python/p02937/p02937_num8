s = input()
t = input()

s_length = len(s)
t_length = len(t)

s_repeated = s * (10**100 // s_length)

i = 0
j = 0

while i < len(s_repeated) and j < t_length:
    if s_repeated[i] == t[j]:
        j += 1
    i += 1

if j == t_length:
    print(i // s_length)
else:
    print(-1)