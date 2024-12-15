def main():
    N = int(input())
    p = list(map(int, input().split()))

    sorted_p = sorted(p[:])
    if p == sorted_p:
        print("YES")
        return

    for i in range(N):
        for j in range(i + 1, N):
            if p[i] > p[j]:
                p[i], p[j] = p[j], p[i]
                if p == sorted_p:
                    print("YES")
                    return
                else:
                    p[i], p[j] = p[j], p[i]  # undo the swap

    print("NO")


if __name__ == '__main__':
    main()