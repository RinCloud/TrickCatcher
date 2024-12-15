# Python program to find the price before tax

def find_price(A, B):
    for price in range(1, 101):
        tax1 = int(price * 0.08)
        tax2 = int(price * 0.1)
        if tax1 == A and tax2 == B:
            return price
    return -1

if __name__ == "__main__":
    A, B = map(int, input().split())
    result = find_price(A, B)
    print(result)