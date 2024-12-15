# Program:

S = input().strip()

def is_possible(S):
    if len(S) == 0:
        return True
    
    if S.endswith('dreamer'):
        if is_possible(S[:-7]):
            return True
    
    if S.endswith('dream'):
        if is_possible(S[:-5]):
            return True
    
    if S.endswith('eraser'):
        if is_possible(S[:-6]):
            return True
    
    if S.endswith('erase'):
        if is_possible(S[:-5]):
            return True
    
    return False

if is_possible(S):
    print('YES')
else:
    print('NO')