n = int(input())
a = list(map(int, input().split()))

approval = True

for num in a:
    if num % 2 == 0 and (num % 3 != 0 and num % 5 != 0):
        approval = False
        break

if approval:
    print("APPROVED")
else:
    print("DENIED")