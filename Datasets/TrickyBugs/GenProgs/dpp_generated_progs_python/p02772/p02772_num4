n = int(input())
a = list(map(int, input().split()))

allowed = True
for num in a:
    if num % 2 == 0 and (num % 3 != 0 and num % 5 != 0):
        allowed = False
        break

if allowed:
    print("APPROVED")
else:
    print("DENIED")