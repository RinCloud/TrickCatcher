# Program

S = input()
T = input()

count = 0
for i in range(3):
    if S[i] == T[i]:
        count += 1

print(count)