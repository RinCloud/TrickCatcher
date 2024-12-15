'''
Author : Vipin Kumar
'''

def max_consecutive_hands(n, k, s):
    hands_count = s.count('1')
    max_consecutive_hands = hands_count
    for i in range(k):
        temp = 0
        for j in range(i, n, k):
            if s[j] == '1':
                temp -= 1
            else:
                temp += 1
            temp = max(temp, 0)
            max_consecutive_hands = max(max_consecutive_hands, hands_count + temp)
    return max_consecutive_hands

n, k = map(int, input().split())
s = input()
print(max_consecutive_hands(n, k, s))