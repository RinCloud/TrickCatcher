import sys

def minimize_difference(N, cards):
    cards.sort()
    snuke_sum = sum(cards[:N//2])
    raccoon_sum = sum(cards[N//2:])
    return abs(snuke_sum - raccoon_sum)

def main():
    N = int(input())
    cards = list(map(int, input().split()))

    ans = minimize_difference(N, cards)
    print(ans)

if __name__ == "__main__":
    main()