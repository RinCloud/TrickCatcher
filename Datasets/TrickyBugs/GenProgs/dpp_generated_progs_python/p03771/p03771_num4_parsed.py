import sys


def is_possible_to_visit_all_oases(N, V, oases):
    possible = [False] * N
    last_oasis = 0
    for i in range(N):
        if i == 0 or oases[i] - oases[i-1] <= V:
            possible[i] = True
        else:
            break
    
    for i in range(N-1, -1, -1):
        if i == N-1 or oases[i+1] - oases[i] <= V:
            possible[i] = True
        else:
            break

    for i in range(N):
        if possible[i]:
            last_oasis = i
        else:
            break

    for i in range(1, N-1):
        if oases[i] - oases[i-1] <= 2*V and oases[i+1] - oases[i] <= 2*V:
            if possible[i+1]:
                possible[i] = True
            else:
                if last_oasis == i and oases[i+1] - oases[i] <= V:
                    possible[i] = True
    
    return possible


def main():
    N, V = map(int, input().split())
    oases = list(map(int, input().split()))

    possible = is_possible_to_visit_all_oases(N, V, oases)

    for p in possible:
        if p:
            print("Possible")
        else:
            print("Impossible")


if __name__ == "__main__":
    main()