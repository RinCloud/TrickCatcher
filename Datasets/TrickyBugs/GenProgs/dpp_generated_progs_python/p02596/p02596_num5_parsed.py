import sys

def find_first_occurrence(K):
    current = 7
    position = 1
    
    while(position <= K):
        if(current % K == 0):
            return position
        position += 1
        current = current * 10 + 7
    
    return -1

K = int(sys.stdin.readline().rstrip())
print(find_first_occurrence(K))