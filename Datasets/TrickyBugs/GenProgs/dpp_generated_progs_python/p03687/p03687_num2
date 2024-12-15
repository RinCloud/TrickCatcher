s = input()

count = 0
while len(set(s)) > 1:
    new_s = ''
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            new_s += s[i]
    s = new_s
    count += 1

print(count)