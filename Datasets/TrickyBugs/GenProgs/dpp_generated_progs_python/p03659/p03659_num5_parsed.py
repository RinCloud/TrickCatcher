import sys

def minimize_difference(cards):
    n = len(cards)
    x = sum(cards[:n//2])
    y = sum(cards[n//2:])
    return abs(x - y)

if __name__ == "__main__":
    n = int(input())
    cards = list(map(int, input().split()))
    print(minimize_difference(cards))
    sys.stdout.flush()