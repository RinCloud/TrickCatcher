import sys

def find_jth_car(N, i):
    j = N - i + 1
    return j

def main():
    line = sys.stdin.readline()
    N, i = map(int, line.split())
    
    j = find_jth_car(N, i)
    print(j)

if __name__ == '__main__':
    main()