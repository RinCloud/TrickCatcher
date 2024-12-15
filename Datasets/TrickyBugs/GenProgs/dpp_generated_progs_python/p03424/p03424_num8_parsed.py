def count_colors(arare):
    return len(set(arare))

N = int(input())
arare = input().split()

if count_colors(arare[:3]) == 3:
    print("Three")
else:
    print("Four")