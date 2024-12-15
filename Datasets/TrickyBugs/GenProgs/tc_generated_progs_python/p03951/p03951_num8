N = int(input())
s = input()
t = input()

a = 0
b = 0

for i in range(N):
    if s[i] == t[i]: # The bug is here, it should compare each character of s with the corresponding character in t
        a += 1
        b += 1

print(N*2 - b) # The bug is here, instead of calculating the length of the shortest string, it was calculating the length of the longest string that satisfies the condition