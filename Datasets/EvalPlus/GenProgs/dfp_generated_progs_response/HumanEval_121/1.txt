def solution(lst):
    return sum([x for i, x in enumerate(lst) if i % 2 == 0 and x % 2 != 0])