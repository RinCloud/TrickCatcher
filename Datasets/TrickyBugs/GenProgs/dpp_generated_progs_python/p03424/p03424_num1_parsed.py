# PROGRAM:

N = int(input())
arare = input().split()

if len(set(arare)) == 3:
    print('Three')
else:
    print('Four')