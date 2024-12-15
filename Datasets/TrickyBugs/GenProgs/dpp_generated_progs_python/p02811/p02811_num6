import sys

def check_coins(K: int, X: int) -> str:
    total = K * 500
    if total >= X:
        return "Yes"
    else:
        return "No"

if __name__ == "__main__":
    input_str = sys.stdin.read().strip()
    K, X = map(int, input_str.split())
    result = check_coins(K, X)
    print(result)