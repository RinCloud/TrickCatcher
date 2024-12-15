import sys

def main():
    N = int(input())
    jobs = []
    for _ in range(N):
        A, B = map(int, input().split())
        jobs.append((A, B))

    jobs.sort(key=lambda x: x[1])

    time = 0
    for A, B in jobs:
        time += A
        if time > B:
            print("No")
            return

    print("Yes")

if __name__ == "__main__":
    main()