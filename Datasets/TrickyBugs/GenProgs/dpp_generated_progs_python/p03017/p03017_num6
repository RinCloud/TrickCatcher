N, A, B, C, D = map(int, input().split())
S = input()

if '##' in S[A-1:C] or '##' in S[B-1:D]:
    print('No')
elif C > D and '...' not in S[B-2:D+1]:
    print('No')
else:
    print('Yes')