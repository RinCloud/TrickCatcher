import sys

def minimize_difference(N, cards):
    cards.sort()
    snuke_cards = cards[:N//2+1]
    raccoon_cards = cards[N//2+1:]
    x = sum(snuke_cards)
    y = sum(raccoon_cards)
    return abs(x-y)

if __name__ == "__main__":
    input_lines = sys.stdin.readlines()
    N = int(input_lines[0])
    cards = list(map(int, input_lines[1].split()))
    
    result = minimize_difference(N, cards)
    print(result)