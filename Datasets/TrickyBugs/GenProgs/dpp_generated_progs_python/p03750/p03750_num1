import sys

def main():
    # Read the input
    N = int(sys.stdin.readline().strip())
    cards_X = []
    for _ in range(N):
        A, B = map(int, sys.stdin.readline().strip().split())
        cards_X.append((A, B))

    cards_Y = list(map(int, sys.stdin.readline().strip().split()))

    Q = int(sys.stdin.readline().strip())
    rounds = []
    for _ in range(Q):
        D, E = map(int, sys.stdin.readline().strip().split())
        rounds.append((D, E))

    # Process each round
    for D, E in rounds:
        max_score = 0
        for i, (A, B) in enumerate(cards_X):
            if B <= E:
                max_score = max(max_score, 1)

        for i, C in enumerate(cards_Y):
            if C <= D:
                max_score = max(max_score, 1)

        if max_score == 0:
            print(-1)
        else:
            print(max_score)


if __name__ == "__main__":
    main()