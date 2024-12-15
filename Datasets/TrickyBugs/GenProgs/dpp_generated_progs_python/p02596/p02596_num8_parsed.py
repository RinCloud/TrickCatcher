"""
def find_multiple(K):
    current_num = 7
    position = 1

    while True:
        if current_num % K == 0:
            return position
        else:
            current_num = current_num * 10 + 7
            position += 1

        if current_num > K * K:
            return -1


K = int(input())
print(find_multiple(K))
"""