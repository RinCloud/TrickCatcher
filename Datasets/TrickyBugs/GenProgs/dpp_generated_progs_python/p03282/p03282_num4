import sys

def get_kth_character(S, K):
    current_string = S
    for _ in range(5*10**15):
        next_string = ''
        for char in current_string:
            if char == '1':
                next_string += '1'
            else:
                next_string += char * int(char)
        current_string = next_string
    return current_string[K-1]


if __name__ == "__main__":
    S = input().strip()
    K = int(input().strip())
    result = get_kth_character(S, K)
    print(result)