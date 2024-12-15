def main():
    A, B, C = map(int, input().split())

    count = 0
    while A % 2 == 0 and B % 2 == 0 and C % 2 == 0:
        half_A = A // 2
        half_B = B // 2
        half_C = C // 2
        A = half_B + half_C
        B = half_A + half_C
        C = half_A + half_B
        count += 1

    if A % 2 == 0 or B % 2 == 0 or C % 2 == 0:
        print(-1)
    else:
        print(count)


if __name__ == '__main__':
    main()