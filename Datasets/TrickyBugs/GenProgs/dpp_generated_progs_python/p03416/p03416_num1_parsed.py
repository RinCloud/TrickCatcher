A, B = input().split()
A = int(A)
B = int(B)

count = 0

for num in range(A, B+1):
    if str(num) == str(num)[::-1]:
        count += 1

print(count)