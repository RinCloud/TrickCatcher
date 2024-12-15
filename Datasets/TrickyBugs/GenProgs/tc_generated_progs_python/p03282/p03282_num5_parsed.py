s = input()
k = int(input())

count = 0

for i in range(len(s)):
    count += 1
    if count == k or int(s[i]) > 1:
        print(s[i])
        break