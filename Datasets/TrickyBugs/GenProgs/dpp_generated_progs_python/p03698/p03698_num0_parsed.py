# Program:

S = input().strip()
if len(set(S)) == len(S):
    print('yes')
else:
    print('no')