N = int(input())
arare = input().split()

colors = set(arare)

if len(colors) == 3:
    print("Three")
else:
    print("Four")
