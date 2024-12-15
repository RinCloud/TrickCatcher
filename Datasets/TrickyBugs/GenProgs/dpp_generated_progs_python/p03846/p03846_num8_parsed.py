import sys

def main():
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))

    counter = [0] * (N + 1)
    total = 0
    
    for i in range(N):
        if A[i] >= N - i:
            print(0)
            return
        counter[A[i]] += 1

    for i in range(1, N + 1):
        if i == 1:
            if counter[i] != 1:
                print(0)
                return
            total = 1
        else:
            total = (total * pow(counter[i - 1], counter[i], 10**9 + 7)) % (10**9 + 7)

    print(total)


if __name__ == '__main__':
    main()