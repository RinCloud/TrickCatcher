def solution(lst):
    return sum([num for idx, num in enumerate(lst) if idx % 2 == 0 and num % 2 != 0])