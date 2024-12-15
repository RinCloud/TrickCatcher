def solution(lst):
    return sum([x for i, x in enumerate(lst) if x % 2 != 0 and i % 2 == 0])