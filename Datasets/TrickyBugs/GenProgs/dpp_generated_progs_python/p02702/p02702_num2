import sys

def count_pairs(S):
    n = len(S)
    count = 0

    for i in range(n):
        num = 0
        for j in range(i, n):
            num = num * 10 + int(S[j])
            if num % 2019 == 0:
                count += 1

    return count

def main():
    S = sys.stdin.readline().strip()
    result = count_pairs(S)
    print(result)

if __name__ == "__main__":
    main()