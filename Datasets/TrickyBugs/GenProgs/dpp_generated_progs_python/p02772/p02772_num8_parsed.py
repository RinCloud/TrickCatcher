n = int(input())
numbers = list(map(int, input().split()))

allowed = True
for num in numbers:
    if num % 2 == 0 and (num % 3 != 0 and num % 5 != 0):
        allowed = False
        break

if allowed:
    print("APPROVED")
else:
    print("DENIED")