import sys

def find_multiple_of_k(K):
    n = 1
    num = 7 % K
    while num != 0 and n < K:
        num = (num * 10 + 7) % K
        n += 1
    return n if num == 0 else -1

def main():
    K = int(sys.stdin.readline().strip())
    result = find_multiple_of_k(K)
    print(result)

if __name__ == '__main__':
    main()