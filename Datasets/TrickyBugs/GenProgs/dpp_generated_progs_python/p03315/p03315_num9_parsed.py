# Program:

def takahashi_mind(S):
    mind = 0
    for symbol in S:
        if symbol == "+":
            mind += 1
        else:
            mind -= 1
    return mind

S = input()
print(takahashi_mind(S))