import sys

def max_card_sum(A, B, C, K):
    # picking A cards with value 1
    sum_cards = min(A, K)
    K -= sum_cards

    # picking B cards with value 0
    sum_cards += min(B, K)
    K -= min(B, K)

    # picking C cards with value -1
    sum_cards -= min(C, K)
    K -= min(C, K)

    return sum_cards

if __name__ == '__main__':
    # Read input values
    A, B, C, K = map(int, sys.stdin.readline().split())

    # Calculate and print the result
    result = max_card_sum(A, B, C, K)
    print(result)