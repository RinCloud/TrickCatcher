from math import ceil

def main():
    N = int(input())

    times = []
    for _ in range(N-1):
        C, S, F = map(int, input().split())
        times.append((C, S, F))

    for i in range(N):
        time = 0
        for j in range(i, N-1):
            C, S, F = times[j]
            if time < S:
                time = S
            else:
                time = ceil(time / F) * F
            time += C
        print(time)

if __name__ == "__main__":
    main()
