# Program

N = int(input())

found = False
for i in range(1, 10):
    if N % i == 0 and N // i <= 9:
        found = True
        break

if found:
    print("Yes")
else:
    print("No")