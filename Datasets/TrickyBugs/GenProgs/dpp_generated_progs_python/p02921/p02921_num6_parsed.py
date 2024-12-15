# Program

## Input
s = input()
t = input()

## Initialize count variable
count = 0

## Loop through each character in the strings
for i in range(len(s)):
    ## Check if forecast matches the actual weather
    if s[i] == t[i]:
        count += 1

## Output the count
print(count)