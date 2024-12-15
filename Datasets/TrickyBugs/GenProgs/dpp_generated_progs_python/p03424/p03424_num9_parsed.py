N = int(input())
S = input().split()

colors = set(S)
if len(colors) == 3:
    print("Three")
else:
    print("Four")