# Program

def score_difference(N, cards):
    cards.sort(reverse=True)
    alice_score = sum(cards[0:N:2])
    bob_score = sum(cards[1:N:2])
    return alice_score - bob_score

if __name__ == "__main__":
    N = int(input())
    cards = list(map(int, input().split()))
    print(score_difference(N, cards))