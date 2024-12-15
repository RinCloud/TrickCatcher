import sys

def is_possible(A, B, C):
    if C % A == 0 or C % B == 0:
        return "YES"
    
    for i in range(1, B+1):
        if (C - (A*i)) % B == 0:
            return "YES"
    
    return "NO"

if __name__ == "__main__":
    A, B, C = map(int, sys.stdin.readline().split())
    print(is_possible(A, B, C))