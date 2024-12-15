A, B = map(int, input().split())

count = 0

for num in range(A, B+1):
    if str(num) == str(num)[::-1]: # check if the number is palindrome 
        count += 1

print(count)
