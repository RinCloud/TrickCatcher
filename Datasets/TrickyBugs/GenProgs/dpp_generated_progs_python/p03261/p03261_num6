# Given program is asking to print `Yes` if conditions are satisfied otherwise print `No`.
# Initialy add all first characters of strings in set.
#Iterat over all string and check whether set already include first character of current string or previousi string last character is not equal to current string first element. If any of the above condition is satisfied then we can say this word is not satisfying condition. 

n = int(input())
words = []
for i in range(n):
    words.append(input().strip())

first_chars = set()
first_chars.add(words[0][0])
for i in range(1, n):
    if words[i][0] in first_chars or words[i-1][-1] != words[i][0]:
        print("No")
        exit()
    first_chars.add(words[i][0])

print("Yes")